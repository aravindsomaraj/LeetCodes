class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n = chars.size();
        int k=0;
        int c=0;
        for(int i=0; i<n; i++)
        {
            
            char ch = chars[i];
            c=1;
            while(i<n-1 && ch==chars[i+1])
            {
                c++;
                i++;
            }
            chars[k] = ch;
            k++;
            if(c!=1)
                if(c>=10)
                {
                    string s = to_string(c);
                    for(int z=0; z<s.size(); z++)
                    {
                        chars[k++] = s[z];
                    }
                }
                else
                    chars[k++] = c+48;
                
        }
        return k;
    }
};
