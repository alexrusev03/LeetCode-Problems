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
var reverseKGroup = function(head, k) {
    if(head==null || head.next==null || k == 1) {return head;}

    curr = head;
    sol = null;
    dum = null;

    while(curr!=null) {
        l = curr;
        r = null;
        var count = 0;
        while(curr!=null && count != k) {
            r = curr;
            curr = curr.next;
            count++;
        }

        if(count != k) {
            if(sol==null) {return head;}
            dum.next = l;
            return sol;
        }

        r.next = null;
        rev = reverse(l);

        if(sol==null) {sol = rev;}
        else {dum.next = rev;}
        dum = l;
    }
    return sol;
}
var reverse = function(curr){
    next = curr, prev = null;
    while(curr!=null) {
        next = curr.next;
        curr.next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
