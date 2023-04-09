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
    public ListNode MergeKLists(ListNode[] lists) {
        List<int> list = new List<int>();
        for (int i = 0; i < lists.Length; i++) {
            while(lists[i] != null){
                list.Add(lists[i].val);
                lists[i] = lists[i].next;
            }
        }
        list.Sort();
        ListNode temp = new ListNode();
        ListNode ans = temp;
        foreach (int i in list){
            temp.next = new ListNode(i);
            temp=temp.next;
        }
        return ans.next;
    }
}
