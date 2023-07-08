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
class Tree {
public:
    int val,count;
    Tree *left,*right;
    Tree(int x) : val(x), count(1), left(nullptr), right(nullptr) {}
};
class Solution {
public:
    int helper(Tree* root, int k)
    {
        int leftcount = root->left? root->left->count : 0;
        if(k == leftcount+1) return root->val;
        else if(k > leftcount+1) return helper(root->right,k-leftcount-1);
        else return helper(root->left,k);
    }
    Tree* buildTree(TreeNode* root)
    {
        if(!root) return nullptr;
        Tree* nRoot = new Tree(root->val);
        nRoot->left = buildTree(root->left);
        nRoot->right = buildTree(root->right);
        nRoot->count += nRoot->left? nRoot->left->count : 0;
        nRoot->count += nRoot->right? nRoot->right->count : 0;
        return nRoot;
    }
    int kthSmallest(TreeNode* root, int k) {
        
        Tree* newRoot = buildTree(root);
        return helper(newRoot,k);
    }
};