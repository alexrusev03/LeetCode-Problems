# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        ln1=ListNode()
        ln2=ListNode(None)
        less=ln1
        great=ln2
        curr=head
        while curr!=None:
            if curr.val<x:
                less.next=curr
                less=less.next
            else:
                great.next=curr
                great=great.next
            curr=curr.next
        great.next=None
        less.next=ln2.next
        return ln1.next
