"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        res=[]
        if root==None:
            return res
        self.helper(root,res)
        return res
    def helper(self, root:'Node', res):
        res.append(root.val)
        for i in root.children:
            self.helper(i,res)
