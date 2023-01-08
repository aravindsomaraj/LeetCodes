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
    void Solve(TreeNode* root,vector<int>& v)
    {
        if(root==0)
            return;
        
        Solve(root->left,v);
        v.push_back(root->val);
        Solve(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {

        vector<int> v;
        Solve(root,v);
        
        return v[k-1];
    }
};
