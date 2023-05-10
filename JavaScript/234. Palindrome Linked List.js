/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function(head) {
    var list = new Array();
    var curr=head;
    while(curr!=null){
        list.push(curr.val);
        curr=curr.next;
    }
    var n=list.length;
    for(var i=0;i<n/2;i++){
        if(list[i]!=list[n-1-i]){
            return false;
        }
    }
    return true;
};
