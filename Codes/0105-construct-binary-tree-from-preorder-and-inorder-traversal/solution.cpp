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
    int i;
    TreeNode* build(vector<int>& P, vector<int>& I, int l, int r)
    {
        if(l>r || i==P.size()) return NULL;

        int val = P[i++];
        TreeNode* root = new TreeNode(val);

        auto it = find(I.begin(),I.end(),val);
        int mid = distance(I.begin(),it);
        root->left = build(P,I,l,mid-1);
        root->right = build(P,I,mid+1,r);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        i=0;
        return build(preorder,inorder,0,inorder.size()-1);
    }
};
