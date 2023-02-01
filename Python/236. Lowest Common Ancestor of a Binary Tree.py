# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
       if root == None:
           return None
       
       if root.val == p.val or root.val == q.val:
           return root
       
       l = self.lowestCommonAncestor(root.left,p,q)
       r = self.lowestCommonAncestor(root.right,p,q)
       
       if l != None and r != None:
           return root
       elif l != None and r ==None:
           return l
       elif l == None and r !=None:
           return r
       else:
           return None
