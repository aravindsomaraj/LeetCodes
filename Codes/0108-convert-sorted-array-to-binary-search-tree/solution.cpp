/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* Solve(vector<int>&nums, int l ,int r)
    {
        if(l>r)
            return NULL;
        int m = (l+r)/2;

        TreeNode* root = new TreeNode(nums[m]);
        root->left = Solve(nums,l,m-1);
        root->right= Solve(nums,m+1,r);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int l=0,r=nums.size()-1;
        return Solve(nums,l,r);
        
    }
};
