class Solution {
public:
    string addBinary(string a, string b) {
        
        if(a.size()<b.size())
            return addBinary(b,a);
        string ans="";
        
        int i=a.size()-1,j=b.size()-1;
        int sum=0,carry=0;
        while(i>=0 && j>=0)
        {
            sum = carry ^ (a[i]-'0') ^ (b[j]-'0');
            carry = (a[i]-'0')&(b[j]-'0') | (b[j]-'0')&carry | (a[i]-'0')&carry;
            ans = char(sum+'0') + ans;
            i--,j--;
        }
        while(i>=0)
        {
            sum = carry ^ (a[i]-'0');
            carry = (a[i]-'0')&carry;
            ans = char(sum+'0') + ans;
            i--;
        }
        return carry?'1'+ans : ans;
    }
};