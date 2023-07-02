# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDiffInBST(self, root: Optional[TreeNode]) -> int:
        diff = sys.maxsize
        temp = -1
        def helper(root):
            nonlocal diff
            nonlocal temp
            if root!=None:
                helper(root.left)
                if temp==-1:
                    temp=root.val
                else:
                    diff=min(root.val-temp, diff)
                    temp=root.val
                helper(root.right)
        helper(root)
        return diff
