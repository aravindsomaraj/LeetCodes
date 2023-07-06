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
    int diameterOfBinaryTree(TreeNode* root) {

        int diameter=0;
        function<int(TreeNode*)> dia = [&](TreeNode* root) {
            if(!root) return 0;

            int lh = dia(root->left);
            int rh = dia(root->right);

            diameter = max(diameter,lh+rh);

            return 1+max(lh,rh);
        };

        dia(root);
        return diameter;
    }
};
