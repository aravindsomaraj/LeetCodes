/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* Solve(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root==p || root==q || root==0)
            return root;

        TreeNode* p1 = Solve(root->left,p,q);
        TreeNode* p2 = Solve(root->right,p,q);

        if(p1&&p2)
            return root;
        else
            return p1?p1:p2;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        return Solve(root,p,q);
    }
};
