class MyHashSet {
public:
    vector<int> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
        v.push_back(key);
    }
    
    void remove(int key) {
        auto it = find(v.begin(),v.end(),key);
        while(it!=v.end()) {
            v.erase(it);
            it = find(v.begin(),v.end(),key);
        }
    }
    
    bool contains(int key) {
        auto it = find(v.begin(),v.end(),key);
        if(it!=v.end()) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
