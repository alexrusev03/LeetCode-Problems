# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        res=[]
        s = ""
        self.helper(root,s,res)
        return res
    def helper(self, root: Optional[TreeNode], s: str, res: List[str]):
        if root.left==None and root.right==None:
            s=s+str(root.val)
            res.append(s)
        s=s+str(root.val)+"->"
        if root.left!=None:
            self.helper(root.left,s,res)
        if root.right!=None:
            self.helper(root.right,s,res)
