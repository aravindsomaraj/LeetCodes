class Solution {
public:
    string reverseStr(string s, int k) {
        string rev="",temp="";
        int l=k,u=2*k;
        for(int i=0;i<s.size();i++)
        {
            if(i%u < l) temp = s[i] + temp;
            else 
            {
                rev = rev + temp + s[i];
                temp = "";
            }
        }
        return temp==""? rev : rev+temp;
        
    }
};
