class Solution {
public:
    bool Rep(int n, unordered_map<int,int>& mp)
    {
        if(n==1)
            return true;
        
        if(mp[n]==1)
        {
            return false;
        }
        mp[n]=1;
        int num=0;
        while(n)
        {
            
            int d = n%10;
            num = num + d*d;
            n/=10;
        }
        // cout << num << " ";
        return Rep(num,mp);
    }
    bool isHappy(int n) {
        
        unordered_map<int,int> mp;
        return Rep(n,mp);
        
        
    }
};
