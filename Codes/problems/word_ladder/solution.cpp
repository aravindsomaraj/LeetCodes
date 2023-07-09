class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {

        unordered_set<string> dict (wordList.begin(),wordList.end());
        queue<string> q;
        q.push(beginWord);
        int k=1;
        while(!q.empty())
        {
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                string s = q.front(); q.pop();
                if(s==endWord) return k;
                dict.erase(s);
                for(int j=0;j<s.size();j++)
                {
                    char ch = s[j];
                    for(int m=0;m<26;m++)
                    {
                        s[j] = 'a'+m;
                        if(dict.find(s)!=dict.end())
                            q.push(s);
                    }
                    s[j] = ch;
                }
            }
            k++;
        }
        return 0;
    }
};