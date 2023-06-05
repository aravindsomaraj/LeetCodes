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
    struct newTreeNode {
        int val;
        int count;
        newTreeNode *left;
        newTreeNode *right;
        newTreeNode(int x) : val(x) , count(1) {}
    };
    newTreeNode* T;
    int helper(newTreeNode* tRoot, int k){
        int leftCount = (tRoot->left == NULL)? 0 : tRoot->left->count;
        if(k == leftCount + 1) return tRoot->val;
        else if (k > leftCount + 1) return helper(tRoot->right, k - leftCount - 1);
        else return helper(tRoot->left, k);
    }
    newTreeNode* buildtTree(TreeNode* root){
        if(root == NULL) return NULL;
        newTreeNode* tNode = new newTreeNode(root->val);
        tNode->left = buildtTree(root->left);
        tNode->right = buildtTree(root->right);
        tNode->count +=  (tNode->left == NULL)? 0 : tNode->left->count;
        tNode->count +=  (tNode->right == NULL)? 0 : tNode->right->count;
        return tNode;
    }
    int kthSmallest(TreeNode* root, int k) {
        T = buildtTree(root);
        return helper(T, k);
    }
};