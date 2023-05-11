# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def generateTrees(self, n: int) -> List[Optional[TreeNode]]:
        ans = self.helper(1, n)
        return ans
    def helper(self, start: int, end: int):
        ans=[]
        if start>end:
            ans.append(None)
            return ans
        for i in range(start,end+1):
            left = self.helper(start, i-1)
            right = self.helper(i+1, end)
            for l in left:
                for r in right:
                    ans.append(TreeNode(i, l, r))
        return ans
