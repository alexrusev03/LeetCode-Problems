# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def recoverTree(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        f=None
        s=None
        pre=None
        def helper(root):
            nonlocal f, s, pre
            if root==None:
                return
            helper(root.left)
            if pre and pre.val>root.val:
                if(f==None):
                    f=pre
                s=root
            pre=root
            helper(root.right)
        helper(root)
        temp = f.val
        f.val=s.val
        s.val=temp
