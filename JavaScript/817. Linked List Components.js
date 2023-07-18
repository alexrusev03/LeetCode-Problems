/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number[]} nums
 * @return {number}
 */
var numComponents = function(head, nums) {
    var mp = new Map();
    for(var i of nums){
        mp[i]++;
    }
    var res = 0;
    while(head!=null){
        if(mp[head.val]!=null){
            while(head.next!=null && mp[head.next.val]!=null){
                head = head.next;
            }
            res++;
        }
        head = head.next;
    }
    return res;
};
