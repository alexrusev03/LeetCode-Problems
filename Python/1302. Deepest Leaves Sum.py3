# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
        d=0
        height=0
        res=0
        def dfs(root, height):
            nonlocal d, res
            if root.left==None and root.right==None:
                if height==d:
                    res+=root.val
                elif height>d:
                    d=height
                    res=root.val
            if root.left:
                dfs(root.left,height+1)
            if root.right:
                dfs(root.right,height+1)
        dfs(root,height)
        return res
