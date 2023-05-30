# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def countNodes(self, root: Optional[TreeNode]) -> int:
        n1 = 0
        n2 = 0
        l = root
        r = root
        while l!=None:
            n1+=1
            l=l.left
        while r!=None:
            n2+=1
            r=r.right
        if n1==n2:
            return pow(2,n1)-1
        return 1+self.countNodes(root.left)+self.countNodes(root.right)
