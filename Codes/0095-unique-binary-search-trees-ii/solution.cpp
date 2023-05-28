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
    vector<TreeNode*> Create(int l, int r)
    {
        vector<TreeNode*> res;
        if(l>r)
        {   
            res.push_back(NULL); 
            return res;
        }
        
        for(int i=l;i<=r;i++)
        {
            vector<TreeNode*> left_BST = Create(l,i-1);
            vector<TreeNode*> right_BST= Create(i+1,r);

            for(int j=0;j<left_BST.size();j++)
            {
                for(int k=0;k<right_BST.size();k++)
                {
                    TreeNode* root = new TreeNode(i);
                    root->left = left_BST[j];
                    root->right= right_BST[k];
                    res.push_back(root);
                }
            }
        }
        return res;
    }
    vector<TreeNode*> generateTrees(int n) {

        return Create(1,n);
        
    }
};
