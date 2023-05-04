# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp=head
        if head==None:
            return None
        arr=[]
        while temp!=None:
            arr.append(temp.val)
            temp=temp.next
        arr.sort()
        res=ListNode(arr[0])
        t=res
        for i in range(1,len(arr)):
            curr=ListNode(arr[i])
            t.next=curr
            t=curr
        t.next=None
        return res
