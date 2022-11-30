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
    ListNode* reverseList(ListNode* head) {
        
        // ListNode* s = head;
        if(head==NULL || head->next==NULL)
            return head;
        
        
        ListNode* curr = head->next;
        ListNode* nextCurr = curr->next;
        
        head->next=NULL;
        
        while(nextCurr!=NULL)
        {
            curr->next = head;
            head=curr;
            curr=nextCurr;
            nextCurr=nextCurr->next;
        }
        
        curr->next=head;
        cout << curr->val << curr->next->val;
        return curr;
        
    }
};