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
var deleteDuplicates = function(head) {
    curr=null;
    sol=null;
    while(head!=null){
        if(head.next!=null && head.next.val == head.val){
            while(head.next!=null && head.next.val == head.val){
                temp = head;
                head = head.next;
                temp=null;
            }
            temp = head;
            head = head.next;
            temp=null;
        }
        else{
            if(sol==null){
                sol=head;
                curr=head;
            }
            else{
                curr.next=head;
                curr=curr.next;
            }
            head=head.next;
        }
    }
    if(curr!=null){curr.next=null;}
    return sol;
};
