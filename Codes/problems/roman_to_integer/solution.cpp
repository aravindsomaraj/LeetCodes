class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int num=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            char ch=s[i];
            switch(ch)
            {
                case 'I':   if(s[i+1]=='V')
                            {
                                num+=4;
                                i++;
                            }
                            else if(s[i+1]=='X')
                            {
                                num+=9;
                                i++;
                            }    
                            else
                                num+=1;
                            break;
                case 'X':   if(s[i+1]=='L')
                            {
                                num+=40;
                                i++;
                            }
                            else if(s[i+1]=='C')
                            {
                                num+=90;
                                i++;
                            }    
                            else
                                num+=10;
                            break;
                case 'C':   if(s[i+1]=='D')
                            {
                                num+=400;
                                i++;
                            }
                            else if(s[i+1]=='M')
                            {
                                num+=900;
                                i++;
                            }    
                            else
                                num+=100;
                            break;
                default: num+=mp[ch];
            }
        }
        
        return num;
    }
};