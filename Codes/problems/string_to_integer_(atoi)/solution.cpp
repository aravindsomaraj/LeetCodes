class Solution {
public:
    int myAtoi(string s) {

        int n = s.size(), f=0, i=0;
        while(i<n && s[i]==' ') i++;

        if(s[i]=='-') f=-1;
        else if(s[i]=='+') f=1;
        !f? f=1 : i++;

        int num = 0;
        while(i<n && isdigit(s[i]))
        {
            int d = s[i]-'0';
            if(num > INT_MAX/10 || (num*10 > INT_MAX-d))
                return f>0? INT_MAX : INT_MIN;
            num = num*10 + d;
            i++;
        }
        return f*num;
    }
};