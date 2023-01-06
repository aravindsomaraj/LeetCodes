class Solution {
public:
    static bool compare(string a, string b)
    {
        return a+b > b+a;
    }
    string largestNumber(vector<int>& nums) {

        vector<string> num;
        for(int& i: nums)
        {
            num.push_back(to_string(i));
        }

        sort(num.begin(),num.end(),compare);
        string res="";
        for(string& i: num)
        {
            res = res + i;
        }
        
        return res[0]=='0'? "0" : res;
    }
};