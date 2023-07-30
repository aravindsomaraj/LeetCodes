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
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        ListNode* node=head;
        for (int i=0; i < k; ++i)
        {
            if (!node)
                return head; // nothing to do list too sort
            node = node->next;
        }
        ListNode* curr = head,*prev=nullptr,*nxt=nullptr;
        for(int i=0;i<k;i++)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head->next = reverseKGroup(curr,k);
        return prev;
    }
};
