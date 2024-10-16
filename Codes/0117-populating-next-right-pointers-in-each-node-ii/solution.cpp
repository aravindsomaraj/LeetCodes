/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if(root) q.push(root);
        while(!q.empty())
        {
            int l = q.size();
            Node* prev = q.front(); q.pop();
            if(prev->left) q.push(prev->left);
            if(prev->right) q.push(prev->right);
            for(int i=1;i<l;i++)
            {
                Node* curr = q.front(); q.pop();
                prev->next = curr;
                prev = curr;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            prev->next = nullptr;
        }
        return root;
    }
};
