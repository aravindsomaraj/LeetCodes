class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        int temp=0,d=0;
        auto selfDiv = [&temp,&d](int i) {
            temp=i;
            while(temp)
            {
                d = temp%10;
                if(d==0 || i%d != 0) return false;
                temp /= 10;
            }
            return true;
        };

        for(int i=left;i<=right;i++) if(selfDiv(i)) v.push_back(i);

        return v;
    }
};
