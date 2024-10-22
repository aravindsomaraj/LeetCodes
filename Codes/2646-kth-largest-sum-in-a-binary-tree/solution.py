# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthLargestLevelSum(self, r: Optional[TreeNode], k: int) -> int:
        return (nlargest(k,(f:=lambda n,l,d=Counter():n and (d.update({l:n.val}),f(n.left,l+1),f(n.right,l+1)) and d)(r,1).values())+[-1]*k)[k-1]
