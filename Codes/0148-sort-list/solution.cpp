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
    ListNode* mergeList(ListNode* l1, ListNode* l2)
    {
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;

        while(l1!=0 && l2!=0)
        {
            if(l1->val <= l2->val)
            {
                curr->next = l1;
                l1=l1->next;
            }
            else
            {
                curr->next = l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        while(l1!=0)
        {
            curr->next = l1;
            l1=l1->next;
            curr=curr->next;
        }
        while(l2!=0)
        {
            curr->next = l2;
            l2=l2->next;
            curr=curr->next;
        }

        return ans->next;
    }
    ListNode* sortList(ListNode* head) {

        if(head==0 || head->next==0)
            return head;
        
        ListNode* temp = NULL;
        ListNode* half = head;
        ListNode* full = head;
        while(full!=0 && full->next!=0)
        {
            temp = half;
            half = half->next;
            full = full->next->next;
        }

        temp->next=NULL;
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(half);

        return mergeList(l1,l2);
        
    }
};
















