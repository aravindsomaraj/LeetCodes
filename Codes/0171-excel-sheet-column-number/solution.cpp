class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        string s = columnTitle;
        int n = columnTitle.size();
        int num=0;
        for(int i=0; i<n; i++)
        {
            int index = n-i-1;
            char ch = s[i];
            int chn = ch - 'A' + 1;
            
            num = num + (chn*pow(26,index));
        }
        return num;
    }
};
