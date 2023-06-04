class Solution {
public:
    int calculate(string s) {

        int curr=0,ans=0,res=0;
        char prevOp = '+';

        s+="##";

        for(char& c:s)
        {
            if(c==' ') continue;
            else if(isdigit(c))
                curr = curr*10 + (c-'0');
            else
            {
                if(prevOp=='*')
                    res*=curr;
                else if(prevOp=='/')
                    res/=curr;
                else
                    ans+=res, res = prevOp=='+'?curr:-curr;
                prevOp = c;
                curr=0;
            }
        }
        return ans;
    }
};
