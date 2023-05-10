# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        arr=[]
        curr=head
        while curr!=None:
            arr.append(curr.val)
            curr=curr.next
        n=len(arr)
        for i in range(int(n/2)):
            if arr[i]!=arr[n-1-i]:
                return False
        return True
