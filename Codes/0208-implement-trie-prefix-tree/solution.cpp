class Trie {
public:
    struct Node
    {
        string key;
        vector<Node*>children;
        bool leaf;
        Node(string s): key(s), children(vector<Node*>(26)), leaf(false) {}
    };
    Node *root;
    Trie() {
        root = new Node("");
    }
    
    void insert(string word) {
        
        Node *curr = root;
        for(int i=0;i<word.size();i++)
        {
            char ch = word[i];
            if(!curr->children[ch-97])
                curr->children[ch-97] = new Node(string(1,ch));
            curr = curr->children[ch-97];
        }
        curr->leaf = true;
    }
    
    bool search(string word) {
        Node *curr = root;
        for(int i=0;i<word.size();i++)
        {
            char ch = word[i];
            curr=curr->children[ch-97];
            if(!(curr && (curr->key)[0]==ch))
                return false;
        }
        if(curr->leaf)
            return true;
        else
            return false;
    }
    
    bool startsWith(string prefix) {
        Node *curr = root;
        for(int i=0;i<prefix.size();i++)
        {
            char ch = prefix[i];
            curr=curr->children[ch-97];
            if(!(curr && (curr->key)[0]==ch))
                return false;
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
