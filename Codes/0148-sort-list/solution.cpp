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
    ListNode* merge(ListNode* a, ListNode* b)
    {
        if(!a)
            return b;
        if(!b)
            return a;
        
        ListNode* curr = 0;
        if(a->val < b->val)
        {
            curr = a; curr->next = merge(a->next,b);
        }
        else
        {
            curr = b; curr->next = merge(a,b->next);
        }
        return curr;
    }
    ListNode* sortList(ListNode* head) {
        
        if(!head || !head->next)
            return head;
        
        ListNode *slow = head, *fast = head->next;
        while(fast && fast->next)
        {
            slow = slow->next; fast=fast->next->next;
        }
        fast = slow->next;
        slow->next = 0;
        ListNode* left = sortList(head);
        ListNode* right = sortList(fast);

        return merge(left,right);
    }
};
