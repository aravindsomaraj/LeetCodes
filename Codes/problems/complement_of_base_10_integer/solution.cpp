class Solution {
public:
    int bitwiseComplement(int num) {
        if(!num) return 1;
        unsigned mask = ~0;
        while (num & mask) mask <<= 1;
        return ~mask & ~num;
    }
};