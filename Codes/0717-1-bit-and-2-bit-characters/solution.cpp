class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=1;
        for(i=1;i<bits.size();)
        {
            if(bits[i-1]==1) i=i+2;
            else i=i+1;
        }
        return i==bits.size();
    }
};
