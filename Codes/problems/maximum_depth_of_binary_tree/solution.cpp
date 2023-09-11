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
    // int a,b;
    // int helper(TreeNode* root)
    // {        
    //     if(root == NULL) return 0;

    //     if(root->val == a || root->val == b)
    //         return 1;
        
    //     int l = helper(root->left);
    //     int r = helper(root->right);
    
    //     if(l && r) return (l+r);
    //     else if(l || r) return max(l,r)+1;
    //     return 0;
    // }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        return 1+max(maxDepth(root->left),maxDepth(root->right));        
    }
};