class Trie {
public:
    struct TrieNode {
        char val;
        TrieNode *nodes[26];
        bool isLeaf;
        TrieNode(char val) : val(val) , isLeaf(false) {
            for(int i=0;i<26;i++) nodes[i] = nullptr;
        }
    };
    TrieNode *root;
    Trie() {
        root = new TrieNode('#');
    }
    
    void insert(string word) {
        
        TrieNode *curr = root;
        for(char& ch:word)
        {
            if(!curr->nodes[ch-'a']) curr->nodes[ch-'a'] = new TrieNode(ch);
            curr = curr->nodes[ch-'a'];
        }
        curr->isLeaf = true;
    }
    
    bool search(string word) {
        TrieNode *curr = root;
        for(char& ch:word)
        {
            if(!curr->nodes[ch-'a']) return false;
            curr = curr->nodes[ch-'a'];
        }
        return curr->isLeaf;
    }
    
    bool startsWith(string prefix) {
        TrieNode *curr = root;
        for(char& ch:prefix)
        {
            if(!curr->nodes[ch-'a']) return false;
            curr = curr->nodes[ch-'a'];
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