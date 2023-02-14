# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        ans=ListNode(0)
        temp = ans
        carry = 0
        carry = 0
        while l1 or l2 or carry:
            num = 0

            if l1:
                num=num+l1.val
                l1=l1.next

            if l2:
                num=num+l2.val
                l2=l2.next

            num=num+carry
            carry = num//10
            temp.next=ListNode(num%10)
            temp=temp.next

        return ans.next
