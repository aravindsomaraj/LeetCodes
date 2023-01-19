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
    vector<int> rightSideView(TreeNode* root) {
        if(root==0)
            return {};

        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                TreeNode* p = q.front();
                q.pop();
                if(i==n-1)
                    ans.push_back(p->val);
                if(p->left)
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
            }
        }
        return ans;
    }
};
