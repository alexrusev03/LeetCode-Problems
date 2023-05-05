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
    ListNode* partition(ListNode* head, int x) {
        ListNode* ln1=new ListNode();
        ListNode* ln2=new ListNode(NULL);
        ListNode* less=ln1;
        ListNode* great=ln2;
        ListNode* curr=head;
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
};
