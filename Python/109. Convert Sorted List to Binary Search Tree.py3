# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedListToBST(self, head: Optional[ListNode]) -> Optional[TreeNode]:
        res=[]
        while head!=None:
            res.append(head.val)
            head=head.next
        return self.sol(0,len(res)-1,res)
    def sol(self, l: int, r: int, res: List[int]):
        if l>r:
            return None
        m = int((l+r)/2)
        root= TreeNode(res[m])
        root.left=self.sol(l,m-1,res)
        root.right=self.sol(m+1,r,res)
        return root
