class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) { 

        vector<int>freq(26);

        for(char i : tasks)
        {
            freq[i-'A']++;
        }

        sort(freq.begin(), freq.end());

        int maxFreq=freq[25]-1;

        int idleslots=maxFreq*n;
        
        for(int i=24; i>=0 && freq[i]>0; i--)
        {
            idleslots-=min(maxFreq, freq[i]);
        }

        return idleslots>0 ? idleslots + tasks.size() : tasks.size();

        
    }
};