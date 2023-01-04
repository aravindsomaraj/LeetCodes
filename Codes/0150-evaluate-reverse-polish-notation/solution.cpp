class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> num;
        
        for(int i=0; i<tokens.size(); i++)
        {
            char op = tokens[i][0];
            cout << op;
            switch(op)
            {
                case '+': {
                            int m = num.top();
                            num.pop();
                            int n = num.top();
                            num.pop();
                            num.push(m+n);
                            break;
                            }
                case '-': {
                            if(tokens[i].size()!=1)
                            {
                                num.push(stoi(tokens[i]));
                            }
                            else
                            {
                                int m = num.top();
                                num.pop();
                                int n = num.top();
                                num.pop();
                                num.push(n-m);
                            }
                            break;
                            }
                case '*': {
                            int m = num.top();
                            num.pop();
                            int n = num.top();
                            num.pop();
                            num.push(m*n);
                            break;
                            }
                case '/': {
                            int m = num.top();
                            num.pop();
                            int n = num.top();
                            num.pop();
                            num.push(n/m);
                            break;
                            }
                default: {
                            num.push(stoi(tokens[i]));

                }
            }
        }

        int ans = num.top();
        return ans;
    }
};
