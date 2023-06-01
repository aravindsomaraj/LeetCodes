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
    TreeNode* build(vector<int>& pp, vector<int>& ii, int l, int r)
    {
        if(l>r || i==pp.size())
            return NULL;

        TreeNode* root = new TreeNode(pp[i]);

        int left=l,right=r,mid=0;
        auto it = find(ii.begin(),ii.end(),pp[i]);
        mid = distance(ii.begin(),it);
        i++;
        root->left = build(pp,ii,left,mid-1);
        root->right= build(pp,ii,mid+1,right);

        return root;

    }
    TreeNode* buildTree(vector<int>& pp, vector<int>& ii) {
        i=0;
        return build(pp,ii,0,ii.size()-1);
    }
};
