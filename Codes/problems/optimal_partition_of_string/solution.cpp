// class Solution {
// public:
//     int partitionString(string s) {
    
//     int min=0;
    
//     vector<int> ch(27, 0);
        
//         for(int i=0; i<s.size(); i++)
//         {        
//             if(ch[s[i]-'a']==1)
//             {    min++;
//                  fill(ch.begin(),ch.end(),0);
//                   i--;
//              }
//             else
//             {    ch[s[i]-'a']++;
//                   if(i==s.size()-1)
//                       min++;
//             }
//         }
//     return min;
//     }
// };
class Solution {
public:
    int partitionString(string s) {
        
        vector<int> mp (256,0);
        // vector<string> ans;
        int start=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]!=1)
            {
                c++;
                // ans.push_back(s.substr(start,i-start));
                // while(mp[s[i]]!=1)
                // {
                //     mp[s[start]]--;
                //     start++;
                // }
                fill(mp.begin(),mp.end(),0);
                mp[s[i]]=1;
                start=i;
            }
            // cout << "\n" << i << " " << s[i];
        }
        // ans.push_back(s.substr(start));
        
        return c+1;
        // return ans.size();
        
    }
};