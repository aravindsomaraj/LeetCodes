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
    int max_sum = INT_MIN;
    int Solve(TreeNode* root)
    {
        if(!root) return 0;

        int l = max(Solve(root->left),0);
        int r = max(Solve(root->right),0);
        int price = root->val + l + r;
        max_sum = max(max_sum,price);
        return root->val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        Solve(root);
        return max_sum;
    }
};