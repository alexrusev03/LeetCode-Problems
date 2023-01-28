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
    public void ReorderList(ListNode head) {
      List<int> list = new List<int>();
      ListNode p1 = head, p2 = head;

      while(p1 != null){
          list.Add(p1.val);
          p1 = p1.next;
      }


      int l = 0, r = list.Count-1;
      int index = 0;

      while(p2!=null && l <= r)
      {

       if(index%2==0){
           p2.val = list[l++];
           index++;
        }

       else{
           p2.val = list[r--];
           index++;
       }

       p2 = p2.next;
      }
      return;
    }
}
