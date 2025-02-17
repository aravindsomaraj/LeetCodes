class Solution(object):
    def minSubArrayLen(self, s, A):
        i, res = 0, len(A) + 1
        for j in xrange(len(A)):
            s -= A[j]
            while s <= 0:
                res = min(res, j - i + 1)
                s += A[i]
                i += 1
        return res % (len(A) + 1)
