/**
 * Definition for singly-linked list->
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head){
    if(head==NULL || head->next==NULL) return head;

    struct ListNode sol={.val = 0, .next = head};
    struct ListNode *prev=&sol;
    struct ListNode *curr=head;
    
    while(curr!=NULL && curr->next!=NULL){
        prev->next = curr->next;
        curr->next = prev->next->next;
        prev->next->next = curr;
        prev = curr;
        curr = curr->next;
    }
    
    return sol.next;
}
