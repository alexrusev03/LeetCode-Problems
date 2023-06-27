"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        res = []
        def helper(root):
            if root==None:
                return res
            for n in root.children:
                helper(n)
            res.append(root.val)
        helper(root)
        return res
