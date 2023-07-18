# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def numComponents(self, head: Optional[ListNode], nums: List[int]) -> int:
        dict = {}
        for i in nums:
            dict[i]=1
        res = 0
        while head!=None:
            if head.val in dict:
                while head.next!=None and head.next.val in dict:
                    head = head.next
                res+=1
            head = head.next
        return res
