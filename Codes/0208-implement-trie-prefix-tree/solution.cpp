class Trie {
public:
   struct Node {
        string key;
        vector<Node*> children;
        bool isLeaf;
        Node(string key) : key(key) , children(vector<Node*>(26,0)) , isLeaf(false) {}
    };
    Node* root;
    Trie()
    {
        root = new Node("");
    }
    void insert(string s)
    {
        Node* curr = root;
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            if(!curr->children[ch-'a']) 
                curr->children[ch-'a'] = new Node(string(1,ch));
            curr = curr->children[ch-'a'];
        }
        curr->isLeaf = true;
    }
    bool search(string s)
    {
        Node* curr = root;
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            if(!curr->children[ch-'a']) return false;
            curr = curr->children[ch-'a'];
        }
        if(curr->isLeaf) return true;
        return false;
    }
    bool startsWith(string s)
    {
        Node* curr = root;
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            if(!curr->children[ch-'a']) return false;
            curr = curr->children[ch-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
