"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if root==None:
            return 0
        res = 0
        for i in root.children:
            res = max(res, self.maxDepth(i))
        return res+1
