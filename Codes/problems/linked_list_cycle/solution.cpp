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
    bool Solve(ListNode* slow, ListNode* fast)
    {
        if(slow==fast)
            return true;
        if(!fast || !fast->next)
            return false;
        return Solve(slow->next,fast->next->next);
        
    }
    bool hasCycle(ListNode *head) {
        if(!head)
            return false;
        return Solve(head,head->next);
        
    }
};