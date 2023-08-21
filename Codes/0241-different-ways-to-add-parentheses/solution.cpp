class Solution {
public:
    int perform(int a, int b, char op) 
    {
        switch(op)
        {
            case '+': return a+b;
            case '-': return a-b;
            case '*': return a*b;
        }
        return -1;
    }

    vector<int> diffWaysToCompute(string exp) {

        vector<int> res;
        bool isNum = 1;
        for(int i=0;i<exp.size();i++)
        {
            if(!isdigit(exp[i]))
            {
                isNum = 0;

                vector<int> left = diffWaysToCompute(exp.substr(0,i));
                vector<int> right = diffWaysToCompute(exp.substr(i+1));

                for(int& j:left)
                    for(int& k:right)
                        res.push_back(perform(j,k,exp[i]));
            }
        }
        if(isNum) res.push_back(stoi(exp));
        return res;
    }
};
