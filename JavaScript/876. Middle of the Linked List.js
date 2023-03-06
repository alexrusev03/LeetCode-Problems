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
var middleNode = function(head) {
    var left = head;
    var right = head;
    while(right!= null && right.next!=null){
        left= left.next;
        right= right.next.next;
    }
    return left;
};
