/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} left
 * @param {number} right
 * @return {ListNode}
 */
var reverseBetween = function(head, left, right) {
    var pre = new ListNode();
    var curr = new ListNode();
    while(right-left>0){
        pre=head;
        var i = 0;
        while(i++<left-1){
            pre=pre.next;
        }
        curr = pre;
        while(i < right){
            curr = curr.next;
            i++;
        }
        var temp = pre.val;
        pre.val = curr.val;
        curr.val = temp;
        left++;
        right--;
    }
    return head;
};
