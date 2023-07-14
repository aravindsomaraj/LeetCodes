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
    unordered_map<TreeNode*,int> dp;
    int rob(TreeNode* root) {
        if(!root) return 0;
        if(dp.count(root)) return dp[root];
        int dontRob = rob(root -> left) + rob(root -> right), robRoot = root -> val;
        if(root -> left) robRoot += rob(root -> left -> left) + rob(root -> left -> right);
        if(root -> right) robRoot += rob(root -> right -> left) + rob(root -> right -> right);
        return dp[root]=max(dontRob, robRoot);
    }
};
// class Solution {
// public:
//     pair<int,int> dfs(TreeNode* root)
//     {
//         if(!root) return {0,0};
//         auto [leftDontRob,LeftRob] = dfs(root->left);
//         auto [RightDontRob,RightRob] = dfs(root->right);

//         return {max(leftDontRob,LeftRob)+max(RightDontRob,RightRob), root->val + leftDontRob + RightDontRob};
//     }
//     int rob(TreeNode* root) {
//         auto ans = dfs(root);
//         return max(ans.first,ans.second);
//     }
// };