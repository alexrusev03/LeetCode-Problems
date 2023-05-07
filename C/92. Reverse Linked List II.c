/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
    struct ListNode* pre = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* curr = (struct ListNode*)malloc(sizeof(struct ListNode));
    while(right-left>0){
        pre=head;
        int i = 0;
        while(i++<left-1){
            pre=pre->next;
        }
        curr = pre;
        while(i < right){
            curr = curr->next;
            i++;
        }
        int temp = pre->val;
        pre->val = curr->val;
        curr->val = temp;
        left++;
        right--;
    }
    return head;
}
