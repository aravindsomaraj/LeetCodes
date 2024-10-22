class Solution(object):
    def combinationSum3(self, k, n):
        return [c for c in
                reduce(lambda combs, _: [[first] + comb
                                         for comb in combs
                                         for first in range(1, comb[0] if comb else 10)],
                       range(k), [[]])
                if sum(c) == n]
        
