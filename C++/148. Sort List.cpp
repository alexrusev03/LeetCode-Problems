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
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        if(head==NULL){
            return NULL;
        }
        vector<int>vec;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        sort(vec.begin(),vec.end());
        ListNode* res= new ListNode(vec[0]);
        ListNode* t=res;
        for(int i=1;i<vec.size();i++){
            ListNode* curr= new ListNode(vec[i]); 
            t->next=curr;
            t=curr;
        }
        t->next=NULL;
        return res;
    }
};
