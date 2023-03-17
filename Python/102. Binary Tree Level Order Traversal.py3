# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        list=[]
        self.solution(0,list,root)
        return list
    def solution(self, lev: int, list: List[List[int]], root: Optional[TreeNode]):
        if root==None:
            return
        if lev==len(list):
            list.append([root.val])
        else:
            list[lev].append(root.val)
        self.solution(lev+1,list,root.left)
        self.solution(lev+1,list,root.right)
