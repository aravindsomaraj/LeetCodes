class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        int ans=0;
        stack<int> num;
        for(string& s:tokens)
        {
            if(isdigit(s[0]) || isdigit(s[1])) num.push(stoi(s));
            else
            {
                int b = num.top(); num.pop();
                int a = num.top(); num.pop();
                switch(s[0])
                {
                    case '+': num.push(a+b); break;
                    case '-': num.push(a-b); break;
                    case '*': num.push(a*b); break;
                    case '/': num.push(a/b); break;
                }
            }
        }
        return num.top();
    }
};
