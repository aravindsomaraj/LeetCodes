class Solution(object):
    def minCut(self, s):
        n = len(s)
        cut = [i - 1 for i in range(n + 1)]  # number of cuts for the first k characters
        
        for i in range(n):
            # Odd length palindrome
            j = 0
            while i - j >= 0 and i + j < n and s[i - j] == s[i + j]:
                cut[i + j + 1] = min(cut[i + j + 1], 1 + cut[i - j])
                j += 1
            
            # Even length palindrome
            j = 1
            while i - j + 1 >= 0 and i + j < n and s[i - j + 1] == s[i + j]:
                cut[i + j + 1] = min(cut[i + j + 1], 1 + cut[i - j + 1])
                j += 1
        
        return cut[n]
        
