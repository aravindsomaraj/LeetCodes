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
    int k;
    int Find(vector<int>& tr, int x)
    {
        for(int i=0; i<tr.size(); i++)
        {
            if(tr[i]==x)
            {
                return i;
            }
        }
        return 0;
    }
        
    TreeNode* Solve(vector<int>& preorder, vector<int>& inorder, int l, int r)
    {
        cout << k << " ";
        if(l>r || k>=preorder.size())
            return NULL;
        int v = preorder[k];
        k++;
        TreeNode* root = new TreeNode(v);
        
        int m = Find(inorder,v);
        root->left = Solve(preorder,inorder,l,m-1);
        root->right= Solve(preorder,inorder,m+1,r);
        
        return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        k=0;
        TreeNode* root;
        root=Solve(preorder,inorder,0,inorder.size()-1);
        return root;
    }
};
