class Solution(object):
    def maximumSwap(self, num):
        num_str = list(str(num))
        max_i, max_n, left, right = -1, -1, -1, -1
        for i in xrange(len(num_str)-1, -1, -1):
            if int(num_str[i]) > int(max_n):
                max_n = num_str[i]
                max_i = i
                continue
                
            if int(num_str[i]) < int(max_n):
                left = i
                right = max_i

        if left == -1: return num
        else:
            num_str[left], num_str[right] = num_str[right], num_str[left]
        return int("".join(num_str))
        
