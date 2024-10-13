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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        queue<TreeNode*> q; q.push(root);
        int l=0; double sum=0;
        while(!q.empty())
        {
            l = q.size();
            for(int i=0;i<l;i++)
            {
                TreeNode* node = q.front();
                if(node->left) q.push(node->left); 
                if(node->right) q.push(node->right);                    
                sum += node->val;
                q.pop();
            }
            v.push_back(1.0*sum/l);
            sum=0;
        }
        return v;
    }
};
