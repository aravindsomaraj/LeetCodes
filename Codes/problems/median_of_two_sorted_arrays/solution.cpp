class Solution {
public:
    int getKth(int s[], int m, int l[], int n, int k){
    // let m <= n
    if (m > n) 
        return getKth(l, n, s, m, k);
    if (m == 0)
        return l[k - 1];
    if (k == 1)
        return min(s[0], l[0]);

    int i = min(m, k / 2), j = min(n, k / 2);
    if (s[i - 1] > l[j - 1])
        return getKth(s, m, l + j, n - j, k - j);
    else
        return getKth(s + i, m - i, l, n, k - i);
    return 0;
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int x = nums1.size()+nums2.size();
        int l = (x+1)/2;
        int r = (x+2)/2;
        int a[nums1.size()],b[nums2.size()];
        copy(nums1.begin(),nums1.end(),a);
        copy(nums2.begin(),nums2.end(),b);
        return (getKth(a,m,b,n,l)+getKth(a,m,b,n,r))/2.0;        
    }
};