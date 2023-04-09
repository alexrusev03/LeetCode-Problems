/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode[]} lists
 * @return {ListNode}
 */
var mergeKLists = function(lists) {
    var arr = new Array();
    for (var i = 0; i < lists.length; i++) {
        while(lists[i] != null){
            arr.push(lists[i].val);
            lists[i] = lists[i].next;
        }
    }
    arr.sort((a,b) => a - b)
    var temp = new ListNode();
    var ans = temp;
    for (var i of arr){
        temp.next = new ListNode(i);
        temp=temp.next;
    }
    return ans.next;
};
