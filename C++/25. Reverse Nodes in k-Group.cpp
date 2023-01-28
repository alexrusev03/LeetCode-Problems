/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k == 1) {return head;}

        ListNode *curr = head;
        ListNode *sol = NULL;
        ListNode *dum = NULL;

        while(curr!=NULL) {
            ListNode *l = curr;
            ListNode *r = NULL;
            int count = 0;
            while(curr!=NULL && count != k) {
                r = curr;
                curr=curr->next;
                count++;
            }

            if(count != k) {
                if(sol==NULL) {return head;}
                dum->next = l;
                return sol;
            }

            r->next = NULL;
            ListNode *rev = reverse(l);

            if(sol==NULL) {sol = rev;}
            else {dum->next = rev;}
            dum = l;
        }
        return sol;
    }
    ListNode* reverse(ListNode *curr) {
        ListNode *next = curr, *prev = NULL;
        while(curr) {
            next =curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
