# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        arr=[]
        p1 = head
        p2 = head
        while p1 != None :
              arr.append(p1.val)
              p1 = p1.next
        
        l = 0
        r = len(arr)-1
        index = 0
        
        while p2!=None and l <= r:
            if index%2==0 :
                p2.val = arr[l]
                l=l+1
                index+=1
            else:
                p2.val = arr[r]
                r=r-1
                index+=1
                
            p2 = p2.next
        
        return
