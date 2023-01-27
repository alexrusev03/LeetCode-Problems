# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr=None
        sol=None
        while head!=None:
            if head.next!=None and head.next.val == head.val:
                while head.next!=None and head.next.val == head.val:
                    temp = head
                    head = head.next
                    temp=None
                
                temp = head
                head = head.next
                temp=None
            
            else:
                if sol==None:
                    sol=head
                    curr=head
                
                else:
                    curr.next=head
                    curr=curr.next
                
                head=head.next
        
        if curr!=None:
            curr.next=None

        return sol
