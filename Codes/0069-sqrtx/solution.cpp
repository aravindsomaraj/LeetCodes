class Solution {
public:
    int mySqrt(int x) {
        
        for(long i=0;;i++)
        {
            if((i*i)>x)
                return (int)(i-1);
        }
        return 0;
    }
};
