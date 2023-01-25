/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* fast = head->next->next;
        ListNode* slow = head->next;
        while(fast!=slow && fast != NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        if(fast == NULL || fast -> next == NULL) return NULL;
        ListNode* temp=head;
        while(temp!=fast){
            temp=temp->next;
            fast=fast->next;
        }
        return fast;
    }
};
