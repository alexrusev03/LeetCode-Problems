/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public int NumComponents(ListNode head, int[] nums) {
        Dictionary<int, int> dict = new Dictionary<int, int>();
        for(int i = 0; i < nums.Length; i++){
            dict[nums[i]]=i;
        }
        int res = 0;
        while(head!=null){
            if(dict.ContainsKey(head.val)){
                while(head.next!=null && dict.ContainsKey(head.next.val)){
                    head = head.next;
                }
                res++;
            }
            head = head.next;
        }
        return res;
    }
}
