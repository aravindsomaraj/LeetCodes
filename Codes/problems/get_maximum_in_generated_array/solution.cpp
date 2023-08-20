class Solution {
public:
    int getMaximumGenerated(int n) {

        if(n==0) return 0;
        int *A = new int[n+1];
        A[0] = 0, A[1] = 1;
        for(int i=2;i<=n;i++)
        {
            if(i%2==0) A[i] = A[i/2];
            else A[i] = A[(i-1)/2] + A[(i+1)/2];
        }
        return *max_element(A,A+n+1);
    }
};