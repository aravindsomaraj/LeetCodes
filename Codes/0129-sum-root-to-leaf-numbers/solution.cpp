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
    int sum=0;
    void inorder(TreeNode* root, int num)
    {
        if(!root) return;
        if(!root->left && !root->right)
        {
            cout << sum << " " << num << " " << root->val << endl;
            sum += num*10 + root->val;
            return;
        }
        num = num*10 + root->val;
        inorder(root->left,num);
        inorder(root->right,num);
    }
    int sumNumbers(TreeNode* root) {
        inorder(root,0);
        return sum;
    }
};
