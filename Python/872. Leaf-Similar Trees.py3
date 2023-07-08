# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        arr1 = []
        arr2 = []
        def helper(root, arr):
            if root == None:
                return
            if root.left == None and root.right == None:
                arr.append(root.val)
                return
            helper(root.left, arr)
            helper(root.right, arr)
        helper(root1, arr1)
        helper(root2, arr2)
        return arr1 == arr2
