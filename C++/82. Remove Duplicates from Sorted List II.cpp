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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=NULL;
        ListNode* sol=NULL;
        while(head!=NULL){
            if(head->next && head->next->val == head->val){
                while(head->next && head->next->val == head->val){
                    ListNode* temp = head;
                    head = head->next;
                    temp=NULL;
                }
                ListNode* temp = head;
                head = head->next;
                temp=NULL;
            }
            else{
                if(sol==NULL){
                    sol=head;
                    curr=head;
                }
                else{
                    curr->next=head;
                    curr=curr->next;
                }
                head=head->next;
            }
        }
        if(curr!=NULL){curr->next=NULL;}
        return sol;
    }
};
