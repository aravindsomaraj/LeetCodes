class Solution {
public:
    const string vowels="AEIOUaeiou";
    int freq[10]={0};
    vector<int> pos;
    void isVowel(char c, int idx){
        int i=vowels.find(c);
        if (i!=-1){
            freq[i]++;
            pos.push_back(idx);
        }
    }
    void print(auto & c){
        for(int i: c) cout<<i<<", ";
        cout<<endl;
    }

    string sortVowels(string s) {
        int n=s.size();
        for(int i=0; i<n; i++)
            isVowel(s[i], i);
        int count=0, v=freq[0], j=0;
        for (int i: pos){
            while(count>=v)
                v+=freq[++j];
            s[i]=vowels[j];
            count++;
        }
        return s;
    }
};
