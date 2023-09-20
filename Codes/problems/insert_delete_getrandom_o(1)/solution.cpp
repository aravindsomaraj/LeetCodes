class RandomizedSet {
public:
set<int> st;
int sz;
    RandomizedSet() {
        sz = 0;
    }
    
    bool insert(int val) {
        if(st.count(val)) return false;
        st.insert(val); sz++;
        return true;
    }
    
    bool remove(int val) {
        if(!st.count(val)) return false;
        st.erase(st.find(val));
        sz--;
        return true;
    }
    
    int getRandom() {
        int n = rand()%sz;
        auto it = st.begin();
        advance(it,n);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */