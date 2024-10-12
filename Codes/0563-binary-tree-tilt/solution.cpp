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
    int sum(TreeNode* root)
    {
        if(!root) return 0;
        return sum(root->left) + root->val + sum(root->right);
    }
    int findTilt(TreeNode* root) {
        if(!root) return 0;
        return findTilt(root->left) + findTilt(root->right) + abs(sum(root->left)-sum(root->right));
    }
};
