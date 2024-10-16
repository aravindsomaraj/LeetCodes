# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def __init__(self):
        self.paths = []
        
    def pathSum(self,root, totalSum, currentPath = None):
        if root:
            if currentPath == None: currentPath = []
            currentPath.append(root.val)
            if not root.left and not root.right and totalSum - root.val == 0:
                self.paths.append(currentPath)
                return self.paths
            self.pathSum(root.left, totalSum - root.val, currentPath[:])
            self.pathSum(root.right, totalSum - root.val, currentPath[:])
        return self.paths
