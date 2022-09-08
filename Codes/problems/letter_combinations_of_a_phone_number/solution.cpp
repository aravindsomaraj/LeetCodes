class Solution {
public:
    unordered_map<char, vector<string>> uMap;
    
    vector<string> getCombs(string& digits, int index)
    {
        if(index == digits.size())
            return {};
        if(index == digits.size()-1)
            return uMap[digits[index]];
        
        vector<string> temp = getCombs(digits, index+1);
        vector<string> news;
        for(int i=0; i<temp.size();i++)
        {
            for(int j=0; j<uMap[digits[index]].size();j++)
            {
                news.push_back(uMap[digits[index]][j]+temp[i]);
            }
        }
        
        return news;
    }
    vector<string> letterCombinations(string digits) {
        
        uMap['2'] = {"a","b","c"};
        uMap['3'] = {"d","e","f"};
        uMap['4'] = {"g","h","i"};
        uMap['5'] = {"j","k","l"};
        uMap['6'] = {"m","n","o"};
        uMap['7'] = {"p","q","r","s"};
        uMap['8'] = {"t","u","v"};
        uMap['9'] = {"w","x","y","z"};
        
        return getCombs(digits,0);
        
    }
};