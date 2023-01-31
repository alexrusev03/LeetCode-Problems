# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        sol=[]
        def solution(root, sol, l):
            if root==None:
                return sol
        
            if len(sol)==l:
                sol.append(root.val)
        
            sol = solution(root.right, sol ,l + 1)
            sol = solution(root.left, sol ,l + 1)
            return sol

        sol = solution(root, sol, 0)
        return sol
