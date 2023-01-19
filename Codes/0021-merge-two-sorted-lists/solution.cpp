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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {

        ListNode* curr=0;
        if(a==0)
            return b;
        if(b==0)
            return a;
        
        if(a->val < b->val)
        {
            curr=a;
            curr->next=mergeTwoLists(a->next,b);
        }
        else
        {
            curr=b;
            curr->next=mergeTwoLists(a,b->next);
        }
        
        return curr;
    }
};
