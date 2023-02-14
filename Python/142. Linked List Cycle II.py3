# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head==None or head.next==None:
            return None

        fast = head.next.next
        slow = head.next
        
        while fast!=slow and fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next

        if fast == None or fast.next == None:
            return None

        temp=head
        while(temp!=fast):
            temp=temp.next
            fast=fast.next

        return fast
