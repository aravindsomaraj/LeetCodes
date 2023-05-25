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
    vector<int> a;
    void Solve(TreeNode* root)
    {
        if(!root)
            return;
        
        Solve(root->left);
        a.push_back(root->val);
        Solve(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {

        Solve(root);
        return a;
        
    }
};
