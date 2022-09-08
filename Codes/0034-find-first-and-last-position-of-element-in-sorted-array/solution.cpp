class Solution {
public:
    
    void binarySearch(vector<int>& nums, int l, int r, int key, int *a)
    {
        if(l>r)
            return ;
        
        int mid = (l+r)/2;
        
        if(nums[mid]==key)
        {
            *a = mid;
            binarySearch(nums,l,mid-1,key,a);
        }
        
        else if(nums[mid]>key)
            binarySearch(nums,l,mid-1,key,a);
    
        else
            binarySearch(nums,mid+1,r,key,a);
        
    }
    void binarySearch2(vector<int>& nums, int l, int r, int key, int *a)
    {
        if(l>r)
            return ;
        
        int mid = (l+r)/2;
        
        if(nums[mid]==key)
        {
            *a = mid;
            binarySearch2(nums,mid+1,r,key,a);
        }
        
        else if(nums[mid]>key)
            binarySearch2(nums,l,mid-1,key,a);
    
        else
            binarySearch2(nums,mid+1,r,key,a);
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> a (2,-1);
        
        binarySearch(nums,0,nums.size()-1,target,&a[0]);
        binarySearch2(nums,0,nums.size()-1,target,&a[1]);
        
        return a;
        
    }
};
