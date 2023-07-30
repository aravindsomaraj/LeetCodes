/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int solve(int l,int r)
    {
        int mid = l+(r-l)/2;
        int res = guess(mid);
        if(res==0) return mid;
        else if(res==1) return solve(mid+1,r);
        else return solve(l,mid-1);
    }
    int guessNumber(int n) {
        return solve(1,n);
    }
};
