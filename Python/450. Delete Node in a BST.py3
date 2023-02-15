# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deleteNode(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:
        if root==None:
            return None

        if root.val<key:
            root.right=self.deleteNode(root.right,key)

        elif root.val>key:
            root.left=self.deleteNode(root.left,key)
        
        else:
            if root.left==None and root.right==None:
                return None
            
            elif root.left==None or root.right==None:
                if root.left!=None:
                    return root.left

                return root.right
            
            else:
                temp=root.left
                while temp.right!=None:
                    temp=temp.right
                
                root.val=temp.val
                root.left=self.deleteNode(root.left, temp.val)
    
        return root
