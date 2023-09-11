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
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* curr = root;
        stack<TreeNode*> st;
        vector<int> ans;
        while(curr || !st.empty())
        {
            while(curr)
            {
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top(); st.pop();
            ans.push_back(curr->val);
            curr = curr->right;
        }
        // std::ios_base::sync_with_stdio(false);
        // std::cin.tie(NULL);

        // vector<int> ans;
        // function<void(TreeNode*)> inorder = [&](TreeNode* root) {
        //     if(!root) return;

        //     inorder(root->left);
        //     ans.push_back(root->val);
        //     inorder(root->right);
        // };
        // inorder(root);
        return ans;
    }
};