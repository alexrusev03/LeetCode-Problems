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
    int numComponents(ListNode* head, vector<int>& nums) {
        map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }
        int res = 0;
        while(head!=NULL){
            if(mp[head->val]!=NULL){
                while(head->next!=NULL && mp[head->next->val]!=NULL){
                    head = head->next;
                }
                res++;
            }
            head = head->next;
        }
        return res;
    }
};
