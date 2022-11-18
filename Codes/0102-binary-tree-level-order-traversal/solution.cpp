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
    void Solve(queue<TreeNode*> fr, vector<vector<int>>& res)
    {
        if(fr.empty())
            return;
        
        queue<TreeNode*> newfr;
        vector<int> tmp;
        
        while(!fr.empty())
        {
            TreeNode* curr = fr.front();
            fr.pop();
            if(curr->left)
            {
                newfr.push(curr->left);
                tmp.push_back(curr->left->val);
            }
            if(curr->right)
            {
                newfr.push(curr->right);
                tmp.push_back(curr->right->val);
            }
        }
        
        
        if(!tmp.empty())
            res.push_back(tmp);
        
        Solve(newfr,res);
        
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        vector<int> tmp;
        queue<TreeNode*> newfr;
        
        if(root!=NULL)
        {
            tmp.push_back(root->val);
            res.push_back(tmp);
            newfr.push(root);
        }
        
        Solve(newfr,res);
        
        return res;
        
    }
};
