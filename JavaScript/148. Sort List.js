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
var sortList = function(head) {
    var temp=head;
    if(head==null){
        return null;
    }
    var arr = new Array();
    while(temp!=null){
        arr.push(temp.val);
        temp=temp.next;
    }
    arr.sort((a, b) => a - b);
    var res= new ListNode(arr[0]);
    var t=res;
    for(var i=1;i<arr.length;i++){
        var curr= new ListNode(arr[i]); 
        t.next=curr;
        t=curr;
    }
    t.next=null;
    return res;
};
