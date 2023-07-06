class Solution {
public:
    int climbStairs(int n) {

        int A[n+1];
        for_each(A,A+n+1,[](int& i){ i = -1; });
        function<int(int)> solve = [&](int i) {
            if(i<=2) return i;

            if(A[i]!=-1) return A[i];

            return A[i] = solve(i-1) + solve(i-2);
        };
        return solve(n);
    }
};