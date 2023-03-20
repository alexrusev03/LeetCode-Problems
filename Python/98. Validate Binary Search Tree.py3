# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        return self.solution(root,-sys.maxsize,sys.maxsize)
    def solution(self, root: Optional[TreeNode], lowval: int, highval: int):
        if root==None:
            return True
        if root.val>lowval and root.val<highval:
            return self.solution(root.left, lowval, root.val) and self.solution(root.right,root.val,highval)
        return False
