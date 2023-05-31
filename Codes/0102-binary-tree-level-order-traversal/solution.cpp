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
    vector<vector<int>> ans;
    vector<vector<int>> levelOrder(TreeNode* root) {
        list<TreeNode*> ll;
        list<TreeNode*> LL;
        if(root) ll.push_back(root);
        while(!ll.empty())
        {
            vector<int> res;
            for(auto& i: ll) res.push_back(i->val);
            ans.push_back(res);
            while(!ll.empty())
            {
                TreeNode* node = ll.front();
                if(node->left) LL.push_back(node->left);
                if(node->right) LL.push_back(node->right);
                ll.pop_front();
            }
            ll=LL;
            LL.clear();
        }
        return ans;
    }
};
