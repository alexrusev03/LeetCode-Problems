/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:

    void reorderList(ListNode* head) {
        
      vector<int> vec;
      ListNode *p1 = head, *p2 = head;

      while(p1 != NULL)
      {
          vec.push_back(p1->val);
          p1 = p1->next;
      }


      int l = 0, r = vec.size()-1;
      int index = 0;

      while(p2!=NULL && l <= r)
      {

       if(index%2==0){
           p2->val = vec[l++];
           index++;
        }

       else{
           p2->val = vec[r--];
           index++;
       }

       p2 = p2->next;
      }
      return;
      
    }
};
