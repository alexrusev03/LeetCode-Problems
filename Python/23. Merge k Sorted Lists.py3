# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        arr=[]
        for i in range(len(lists)):
            while lists[i] != None:
                arr.append(lists[i].val)
                lists[i] = lists[i].next
        arr.sort()
        temp= ListNode()
        ans = temp
        for i in arr:
            temp.next = ListNode(i)
            temp=temp.next
        return ans.next
