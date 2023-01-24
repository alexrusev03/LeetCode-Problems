/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    let ans = new ListNode();
    let temp=ans;
    var carry = 0;
    while(l1!=null || l2!=null ||carry!=0){
        var num = 0;
        if(l1!=null){
            num=num+l1.val;
            l1=l1.next;
        }
        if(l2!=null){
            num=num+l2.val;
            l2=l2.next;
        }
        num=num+carry;
        carry = Math.floor(num/10);
        temp.next=new ListNode(num%10);
        temp=temp.next;
    }
    return ans.next;
};
