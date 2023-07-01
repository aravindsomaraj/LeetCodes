class Solution {
public:
    unordered_set<string> s;
    vector<string> res;
    void helper(string& str, int i, int n, string curr)
    {
        // base case
        if(i == n)
        {
            curr.pop_back();
            res.push_back(curr);
            return;
        }
        // partition str at j and if substring is present int set then call for next
        for(int j = i; j < n; j++)
        {
            if(s.count(str.substr(i, j - i + 1)))
            {
                helper(str, j + 1, n, curr + str.substr(i, j - i + 1) + ' ');
            }
        }
    }
    
    vector<string> wordBreak(string str, vector<string>& wordDict) {
        int n = str.size();
        // insert all the words into set
        for(auto word : wordDict)
        {
            s.insert(word);
        }
        helper(str, 0, n, "");
        return res;
    }
};
