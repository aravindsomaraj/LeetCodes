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
    ListNode* oddEvenList(ListNode* head) {

        if(head==0)
            return 0;

        ListNode* curr = head;
        int f=0;
        ListNode *oddhead=0,*evenhead=0, *oddcur=0, *evecur=0;
        while(curr!=0)
        {
            if((f++)%2==0)
            {
                if(evenhead==0)
                {
                    evenhead=curr;
                    evecur=curr;
                }
                else
                {
                    evecur->next=curr;
                    evecur=curr;
                }
            }
            else
            {
                if(oddhead==0)
                {
                    oddhead=curr;
                    oddcur=curr;
                }
                else
                {
                    oddcur->next=curr;
                    oddcur=curr;
                }
            }
            ListNode* temp = curr->next;
            curr->next=0;
            curr=temp;
        }
        evecur->next = oddhead;

        return head;
        
    }
};