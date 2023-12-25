# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCompleteTree(self, root: Optional[TreeNode]) -> bool:
        q = []
        f = False
        q.append(root)
        while len(q)>0:
            n = q.pop(0)
            if n == None:
                f = True
            else:
                if f == True:
                    return False
                q.append(n.left)
                q.append(n.right)
        return True
