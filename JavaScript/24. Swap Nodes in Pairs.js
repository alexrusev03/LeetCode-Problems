/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var swapPairs = function(head) {
    if(head==null || head.next==null) return head;

    sol = new ListNode(0);
    prev=sol;
    curr=head;
    
    while(curr!=null && curr.next!=null){
        prev.next = curr.next;
        curr.next = prev.next.next;
        prev.next.next = curr;
        
        prev = curr;
        curr = curr.next;
    }
    
    return sol.next;  
};
