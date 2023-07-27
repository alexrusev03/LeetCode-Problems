# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        if root==None:
            return 0
        q = deque()
        q.append(root)
        res=1
        max=-sys.maxsize
        lev=0
        while q:
            n=len(q)
            sum=0
            lev+=1
            for i in range(n):
                t=q.popleft()
                sum+=t.val
                if t.left!=None:
                    q.append(t.left)
                if t.right!=None:
                    q.append(t.right)
            if sum>max:
                max=sum
                res=lev
        return res
