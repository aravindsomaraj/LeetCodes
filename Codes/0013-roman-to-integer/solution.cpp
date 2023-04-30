class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} };
        int num=0;
        int temp=0;
        for(int i=0;s[i]!='\0';i++)
        {
            char ch = s[i];
            temp = i+1;
            switch(ch)
            {
                case 'I': 
                    if(s[temp]=='V' || s[temp]=='X')
                    {
                        num += mp[s[temp]] - mp[ch];
                        i = temp;
                    }
                    else
                        num += mp[ch];
                    break;
                case 'X':
                    if(s[temp]=='L' || s[temp]=='C')
                    {
                        num += mp[s[temp]] - mp[ch];
                        i = temp;
                    }
                    else
                        num += mp[ch];
                    break;
                case 'C':
                    if(s[temp]=='D' || s[temp]=='M')
                    {
                        num += mp[s[temp]] - mp[ch];
                        i = temp;
                    }
                    else
                        num += mp[ch];
                    break;
                default: num += mp[ch];
            }
            cout << num << s[temp] << ch << endl;
        }
        return num;
    }
};
