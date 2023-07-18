/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int numComponents(ListNode head, int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<Integer, Integer>();
        for(int i: nums){
            mp.put(i,1);
        }
        int res = 0;
        while(head!=null){
            if(mp.get(head.val)!=null){
                while(head.next!=null && mp.get(head.next.val)!=null){
                    head = head.next;
                }
                res++;
            }
            head = head.next;
        }
        return res;
    }
}
