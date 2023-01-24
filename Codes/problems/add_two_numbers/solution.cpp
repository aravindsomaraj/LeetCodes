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
    int s=0,c=0;
    ListNode* ans = new ListNode(0);
    ListNode* curr=ans;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(!l1 && !l2)
        {
            if(c)
                curr->next=new ListNode(1);
            return ans->next;
        }
        if(l1)
            s+=l1->val;
        if(l2)
            s+=l2->val;
        s+=c;
        c=s/10;s%=10;
        curr->next = new ListNode(s);curr=curr->next;
        s=0;

        if(l1&&l2)
            return addTwoNumbers(l1->next,l2->next);
        if(l1)
            return addTwoNumbers(l1->next,l2);
        if(l2)
            return addTwoNumbers(l1,l2->next);
        return NULL;
        
    }
};