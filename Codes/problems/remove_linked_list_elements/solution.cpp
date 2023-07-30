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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) {
            return nullptr;
        }

        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* cur = dummy;

        while (cur->next != nullptr) {
            if (cur->next->val == val) {
                cur->next = cur->next->next;
                // Here cannot move cur to cur->next as we need to validate the next node->
            } else {
                cur = cur->next;
            }
        }

        return dummy->next;
    }
};