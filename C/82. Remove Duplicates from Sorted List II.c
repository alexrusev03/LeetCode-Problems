/**
 * Definition for singly-linked list->
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* curr=NULL;
    struct ListNode* sol=NULL;
    while(head!=NULL){
        if(head->next!=NULL && head->next->val == head->val){
            while(head->next!=NULL && head->next->val == head->val){
                struct ListNode* temp = head;
                head = head->next;
                temp=NULL;
            }
            struct ListNode* temp = head;
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
