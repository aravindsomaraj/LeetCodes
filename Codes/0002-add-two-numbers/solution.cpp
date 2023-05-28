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
    int carry=0,sum=0;
    ListNode* Solve(ListNode* p, ListNode* q)
    {
        if(p&&q)
        {    sum = p->val + q->val; p=p->next;q=q->next;}
        else if(p)
        {    sum = p->val;p=p->next;}
        else if(q)
        {    sum = q->val;q=q->next;}
        else
        {
            if(carry)
                return new ListNode(1);
            else
                return NULL;
        }
        sum += carry;
        carry = sum/10;
        sum = sum%10;

        ListNode* x = new ListNode(sum);
        sum = 0;
        x->next = Solve(p,q);
        return x;

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return Solve(l1,l2);
    }
};
