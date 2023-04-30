/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var rotateRight = function(head, k) {
    if(k==0 || head==null){
        return head;
    }
    var t=head;
    var l=head;
    var count = 0;
    var temp = head;
    while(temp!=null){
        count++;
        temp = temp.next;
    }
    for(var i = k%count-1; i >= 0; i--){
        while(t.next!=null){
            l=t;
            t=t.next;
        }
        l.next=null;
        t.next=head;
        head=t;
    }  
    return head;
};
