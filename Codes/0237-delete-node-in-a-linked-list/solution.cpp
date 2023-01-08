/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        ListNode* curr = node;
        ListNode* prev = 0;
        while(curr->next!=0)
        {
            prev=curr;
            curr->val = curr->next->val;
            curr=curr->next;
        }
        delete curr;
        prev->next=0;
    }
};
