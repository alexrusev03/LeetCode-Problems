/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function(headA, headB) {
	var a = headA;
	var b = headB;
	while(a != b){
		if(a == null){
			a = headB;
		}
		else{
			a = a . next;
		}
		if(b == null){
			b = headA;
		}
		else{
			b= b . next;
		}
	}
	return a;
};
