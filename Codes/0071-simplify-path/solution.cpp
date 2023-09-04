class Solution {
public:
    string simplifyPath(string path) {
        
        stringstream ss(path);
        string wd;
        list<string> st;
        while(!ss.eof())
        {
            getline(ss,wd,'/');
            cout << wd << " ";
            if(wd=="." || wd=="") continue;
            else if(wd=="..")
            {
                if(!st.empty()) st.pop_back();
            }
            else
                st.push_back(wd);
        }
        string abc="";
        while(!st.empty())
        {
            abc = abc + '/' + st.front();
            st.pop_front();
        }
        return abc==""? "/" : abc;
    }
};
