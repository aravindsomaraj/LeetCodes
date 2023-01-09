class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        int n = nums.size();
        vector<int> sub;
        for(int& i:nums)
        {
            if(sub.empty() || sub[sub.size()-1] < i)
                sub.push_back(i);
            else
            {
                auto it = lower_bound(sub.begin(),sub.end(),i);
                *it=i;
            }
        }
        return sub.size();
    }
};

// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {

        // int n = nums.size();
        // vector<int> sub;
        // for(int& i:nums)
        // {
        //     if(sub.empty() || sub[sub.size()-1] < i)
        //         sub.push_back(i);
        //     else
        //     {
//                 int l=0;
//                 int r=sub.size()-1;
//                 while(l<r)
//                 {
//                     int mid = (l+r)/2;
//                     if(i==sub[mid])
//                     {
//                         l=mid;break;
//                     }
//                     if(i<sub[mid])
//                         r=mid;
//                     else
//                         l=mid+1;
//                 }
//                 sub[l]=i;
//             }
//         }
//         return sub.size();
//     }
// };



// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {

//         int n = nums.size();
//         vector<int> dp (n,1);

//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<i;j++)
//             {
//                 if(nums[j]<nums[i])
//                     dp[i]=max(dp[i],1+dp[j]);
//             }
//         }
//         return *max_element(dp.begin(),dp.end());
//     }
// };
