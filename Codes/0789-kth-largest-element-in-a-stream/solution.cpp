class KthLargest {
public: 
    multiset<int> s;
    int index;
    KthLargest(int k, vector<int>& nums) {
        for(int &i:nums) s.insert(i);
        index=k;
    }
    
    int add(int val) {
        s.insert(val);
        auto it = s.rbegin();
        advance(it,index-1);
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
