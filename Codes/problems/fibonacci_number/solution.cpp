class Solution {
public:
    int fib(int n,vector<int>& cache)
    {
        if(cache[n]!=-1) return cache[n];
        return cache[n]=fib(n-1,cache)+fib(n-2,cache);
    }
    int fib(int n) {
        if(!n) return 0;
        vector<int> cache (n+1,-1);
        cache[1]=1;cache[0]=0;
        return fib(n,cache);
    }
};