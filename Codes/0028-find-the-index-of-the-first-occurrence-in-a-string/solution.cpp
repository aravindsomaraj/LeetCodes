class Solution {
public:
    void ComputeLPS(string& nee, vector<int>& lps)
    {
        int j=0,i=1,n=nee.size();
        while(i<n)
        {
            if(nee[j]==nee[i])
            {
                j++;
                lps[i] = j;
                i++;
            }
            else
            {
                if(j!=0) j=lps[j-1];
                else i++;
            }
        }
    }
    int strStr(string hay, string nee) {
        int m=hay.size(),n=nee.size();
        set<int> st;
        vector<int> lps (n,0);
        lps[0]=0;
        ComputeLPS(nee,lps);

        int i=0,j=0;
        while((m-i)>=(n-j))
        {
            if(hay[i]==nee[j])
            {
                i++; j++;
            }
            if(j==n)
            {
                st.insert(i-j);
                j = lps[j-1];
            }
            else if(i<m && hay[i]!=nee[j])
            {
                if(j!=0) j=lps[j-1];
                else i++;
            }
        }
        return st.empty()? -1 : *st.begin();
    }
};





// class Solution {
//     public int strStr(String haystack, String needle) {
//         if (needle.isEmpty()) return 0;
//         int[] lps = buildLPS(needle);
//         int n = haystack.length(), m = needle.length();
//         for (int i = 0, j = 0; i < n; i++) {
//             while (j > 0 && haystack.charAt(i) != needle.charAt(j)) 
//                 j = lps[j - 1];
//             if (haystack.charAt(i) == needle.charAt(j)) {
//                 if (++j == m) 
//                     return i - m + 1; // found solution
//             }
//         }
//         return -1;
//     }
//     private int[] buildLPS(String pattern) {
//         int n = pattern.length();
//         int[] lps = new int[n];
//         for (int i = 1, j = 0; i < n; i++) {
//             while (j > 0 && pattern.charAt(i) != pattern.charAt(j)) 
//                 j = lps[j - 1];
//             if (pattern.charAt(i) == pattern.charAt(j)) 
//                 lps[i] = ++j;
//         }
//         return lps;
//     }
// }

// class Solution {
// public:
//     int strStr(string haystack, string needle) {
        
//         int k=0;
//         int n=needle.size();
//         for(int i=0; i<haystack.size();i++)
//         {
//             if(needle[k]==haystack[i] && haystack.substr(i,n)==needle)
//             {
//                 return i;
//             }
                
//         }
//         return -1;
        
//     }
// };

// 0   1   2   3   4
// a   b   a   b   d
// 0
//                 i

// [0] [0] [1] [2] [0]  
