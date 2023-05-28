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
    void Solve(ListNode* node)
    {
        if(!node->next)
            return;
        
        Solve(node->next);
        node->next->next = node;
        // node->next = NULL;

    }
    ListNode* reverseList(ListNode* head) {
        
        if(!head)
            return NULL;
        ListNode* curr = head;
        while(curr->next)
            curr = curr->next;
        ListNode* a = new ListNode(0,curr);
        Solve(head);
        head->next=0;
        return a->next;
    }
};