# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if self.helper(root)!=-1:
            return True
        return False
    def helper(self, root: Optional[TreeNode]):
        if root==None:
            return 0
        l=self.helper(root.left)
        if l==-1:
            return -1
        r=self.helper(root.right)
        if r==-1:
            return -1
        if abs(l-r)>1:
            return -1
        return 1+max(l,r)
