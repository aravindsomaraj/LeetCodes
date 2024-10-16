# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, inorder, postorder):
        self.postIdx = len(postorder)-1
        def build(inStart, inEnd):
            if inStart > inEnd: return None
            root = TreeNode(postorder[self.postIdx])
            self.postIdx -= 1
            root.right = build(inorder.index(root.val)+1, inEnd)
            root.left  = build(inStart, inorder.index(root.val)-1)
            return root        
        return build(0, len(inorder)-1)        
