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
    bool solve(ListNode* slow, ListNode* fast)
    {
        if(!fast || !(fast->next)) return false;
        if(fast==slow) return true;
        return solve(slow->next,fast->next->next);
    }
    bool hasCycle(ListNode *head) {

        if(!head) return false;
        return solve(head,head->next);
    }
};