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
    public ListNode sortList(ListNode head) {
        ListNode temp=head;
        if(head==null){
            return null;
        }
        List<Integer> list = new ArrayList<>();
        while(temp!=null){
            list.add(temp.val);
            temp=temp.next;
        }
        Collections.sort(list);
        ListNode res= new ListNode(list.get(0));
        ListNode t=res;
        for(int i=1;i<list.size();i++){
            ListNode curr= new ListNode(list.get(i)); 
            t.next=curr;
            t=curr;
        }
        t.next=null;
        return res;
    }
}
