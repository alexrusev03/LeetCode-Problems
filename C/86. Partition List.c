/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode* ln1=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* ln2=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* less=ln1;
    struct ListNode* great=ln2;
    struct ListNode* curr=head;
    while(curr!=NULL) {
        if(curr->val<x) {
            less->next=curr;
            less=less->next;
        }
        else{
            great->next=curr;
            great=great->next;
        }
        curr=curr->next;
    }
    great->next=NULL;
    less->next=ln2->next;
    return ln1->next;
}
