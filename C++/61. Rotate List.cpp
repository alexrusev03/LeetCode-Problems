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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL){
            return head;
        }
        int count = 0;
        ListNode* t=head;
        ListNode* l=head;
        ListNode* temp = head;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        for(int i = k%count-1; i >= 0; i--){
            while(t->next!=NULL){
                l=t;
                t=t->next;
            }
            l->next=NULL;
            t->next=head;
            head=t;
        }  
        return head;
    }
};
