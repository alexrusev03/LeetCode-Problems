/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* left = head;
    struct ListNode* right = head;
    while(right!= NULL && right->next!=NULL){
        left= left->next;
        right= right->next->next;
    }
    return left;
}
