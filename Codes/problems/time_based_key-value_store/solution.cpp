class TimeMap {
public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        store[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        for (int i = store[key].size()-1; i >= 0; i--) {
            if (store[key][i].second <= timestamp)
                return store[key][i].first;  
        }
        return "";
    }

private:
    map<string, vector<pair<string, int>>> store;
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */