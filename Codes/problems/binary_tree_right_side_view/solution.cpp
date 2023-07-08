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
    void dfs(TreeNode* root, int cur, int& depth, vector<int>& ans)
    {
        if(!root)
            return;
        
        if(cur > depth)
        {
            ans.push_back(root->val);
            depth = cur;
        }
        dfs(root->right,cur+1,depth,ans);
        dfs(root->left,cur+1,depth,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int depth = 0;
        dfs(root,1,depth,ans);
        return ans;
    }
};