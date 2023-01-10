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
    int siz(ListNode* head){
        if(head == NULL) return 0;

        int count = 0;
        while(head != NULL){
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = siz(head);
        if (n==size){
            return head->next;
        }
        if (n>size){
            return head;
        }

        ListNode*left=head;
        int i = 1;
        while(left!=NULL && i<size - n){
            left = left->next;
            i++;
        }
        left->next = left->next->next;
        return head;
    }
};
