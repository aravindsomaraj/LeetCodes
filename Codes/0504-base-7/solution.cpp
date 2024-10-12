class Solution {
public:
    string convertToBase7(int num) {
        string s=""; int f = num >= 0? 1:0; num = abs(num);
        while(num)
        {
            s = to_string(num%7) + s;
            num /= 7;
        }
        s = (f? "":"-") + s; 
        return (s=="")? "0" : s;
    }
};
