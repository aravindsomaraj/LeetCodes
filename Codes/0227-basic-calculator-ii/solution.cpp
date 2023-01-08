class Solution {
public:
    int Solve(vector<string>& post)
    {
        stack<int> ans;
        for(int i=0; i<post.size(); i++)
        {
            if(post[i][0]>='0' && post[i][0]<='9')
            {
                ans.push(stoi(post[i]));
            }
            else
            {
                int a = ans.top();ans.pop();
                int b = ans.top();ans.pop();
                switch(post[i][0])
                {
                    case '+': ans.push(a+b);break;
                    case '-': ans.push(b-a);break;
                    case '*': ans.push(a*b);break;
                    case '/': ans.push(b/a);break;
                }
            }
        }
        return ans.top();
    }
    int calculate(string s) {

        unordered_map<char,int> mp;
        stack<char> ops;
        mp['+']=0;
        mp['-']=0;
        mp['*']=1;
        mp['/']=1;

        vector<string> post;
        for(int i=0; s[i]!='\0';)
        {
            string p="";
            while(s[i]>='0' && s[i]<='9')
            {
                p=p+s[i++];
            }
            if(p!="")
                post.push_back(p);
            
            if(s[i]==' ')
            {
                i++;
                continue;
            }
            if(s[i]=='\0')
                break;
            while(!ops.empty() && mp[ops.top()]>=mp[s[i]])
            {
                string abc="";
                abc+=ops.top();
                post.push_back(abc);
                ops.pop();
            }
            ops.push(s[i]);
            i++;
        }
        while(!ops.empty())
        {
            string abc="";
            abc+=ops.top();
            post.push_back(abc);
            ops.pop();
        }
        
        return Solve(post);

    }
};
