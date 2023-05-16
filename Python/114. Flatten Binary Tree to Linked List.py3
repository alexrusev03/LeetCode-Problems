# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        if root == None:
            return root
        l = self.flatten(root.left)
        r = self.flatten(root.right)
        if l != None:
            l.right = root.right
            root.right = root.left
            root.left = None
        if r != None:
            return r
        if l != None:
            return l
        return root
