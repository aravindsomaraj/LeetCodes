class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int l = 0, h = nums.size()-1;
        
        vector<int> ans;

        for(int i=l; i<=h; i++){

        
            if(nums[i]<pivot){
                ans.push_back(nums[i]);
        
            }
        }
        for(int i=l; i<=h; i++){
            if(nums[i]==pivot){
                ans.push_back(nums[i]);
            }
        }
        for(int i=l; i<=h; i++){
            if(nums[i]>pivot){
                ans.push_back(nums[i]);
                
            }
        }
         
        return ans;
    }
};
