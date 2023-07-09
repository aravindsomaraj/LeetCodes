/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans = "[", nullstr = "";
        queue<TreeNode*> q;
        if(root) q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* cur = q.front(); q.pop();
                if(!cur)
                {
                    nullstr += "null,";
                }
                else
                {
                    ans += nullstr + to_string(cur->val)+",";;
                    nullstr = "";
                    q.push(cur->left),q.push(cur->right);
                }
            }
        }
        if(ans[ans.size()-1]==',')
            ans[ans.size()-1]=']';
        else
            ans.push_back(']');
        cout << ans;
        return ans;
        
    }

    // Decodes your encoded data to tree.
    vector<string> stream(string data)
    {
        vector<string> v;
        stringstream ss(data);
        while(ss.good())
        {
            string input;
            getline(ss,input,',');
            v.push_back(input);
        }
        return v;
    }
    TreeNode* deserialize(string data) {
        vector<string> v = stream(data.substr(1,data.size()-2));
        if(v[0]=="" || v[0]=="null") return nullptr;

        TreeNode* root = new TreeNode(stoi(v[0]));
        queue<TreeNode*> q;
        q.push(root);
        int k=1;
        while(!q.empty() && k<v.size())
        {
            TreeNode* cur = q.front(); q.pop();
            cur->left = v[k]=="null"? nullptr : new TreeNode(stoi(v[k]));
            k++;
            cur->right= (k==v.size()||v[k]=="null")? nullptr : new TreeNode(stoi(v[k]));
            k++;
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));