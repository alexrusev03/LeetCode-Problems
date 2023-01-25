/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var detectCycle = function(head) {
    if(head==null || head.next==null) return null;
    fast = head.next.next;
    slow = head.next;
    while(fast!=slow && fast != null && fast.next != null) {
        slow = slow.next;
        fast = fast.next.next;
    }
    if(fast == null || fast.next == null) return null;
    temp=head;
    while(temp!=fast){
        temp=temp.next;
        fast=fast.next;
    }
    return fast;
};
