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
    bool check(TreeNode* left, TreeNode* right)
    {
        if(left==0 && right==0)
            return true;
        if(left==0 || right==0 || left->val!=right->val)
            return false;
        
        return check(left->left,right->right) && check(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        
        return check(root->left,root->right);
    }
};