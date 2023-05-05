/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} x
 * @return {ListNode}
 */
var partition = function(head, x) {
    var ln1=new ListNode();
    var ln2=new ListNode(0);
    var less=ln1;
    var great=ln2;
    var curr=head;
    while(curr!=null) {
        if(curr.val<x) {
            less.next=curr;
            less=less.next;
        }
        else{
            great.next=curr;
            great=great.next;
        }
        curr=curr.next;
    }
    great.next=null;
    less.next=ln2.next;
    return ln1.next;
};
