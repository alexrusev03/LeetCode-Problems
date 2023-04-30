# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if k==0 or head==None:
            return head
        count = 0
        t=head
        l=head
        temp = head
        while temp!=None:
            count+=1
            temp = temp.next
        for i in range(k%count-1,-1,-1):
            while t.next!=None:
                l=t
                t=t.next
            l.next=None
            t.next=head
            head=t
        return head
