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
    ListNode* reverseList(ListNode* head) {

        if(!head || !head->next) return head;
        ListNode* curr = head;
        while(curr->next) curr=curr->next;
        ListNode* a = new ListNode(0,curr);

        function<void(ListNode*)> rev = [&](ListNode* node) {
            if(!node->next) return;

            rev(node->next);
            node->next->next = node;
        };

        rev(head);
        head->next = nullptr;
        return a->next;
        
    }
};