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
    int solve(TreeNode* root, int& f)
    {
        if(!root) return 0;

        if(!f) return 0;
        int left = 1+solve(root->left,f);
        int right = 1+solve(root->right,f);

        if(abs(left-right)>1)
        {
            f=0;return 0;
        }
        else
            return max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        
        int f=1;
        solve(root,f);
        return f;
    }
};
