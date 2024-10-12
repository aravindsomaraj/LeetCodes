class Solution {
public:
    bool checkRecord(string s) {
        int A=0,L=0;
        for(char &ch:s)
        {
            if(ch=='A') A++;
            if(ch=='L') L++;
            else L=0;
            if(A==2 || L==3) return false;
        }
        return true;
    }
};
