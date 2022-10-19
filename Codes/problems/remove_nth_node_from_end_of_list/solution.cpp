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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int size=0;
        ListNode *curr;
        curr=head;
        while(curr!=NULL)
        {
            size++;
            curr=curr->next;
        }
        
        int index = size-n+1;
        if(index==1)
            return head->next;
        curr=head->next;
        ListNode *prev;
        prev=head;
        
        for(int i=2;i<=size;i++)
        {
            if(i==index)
            {
                // cout << index;
                // cout << curr->next->val;
                prev->next = curr->next;
                break;
            }
            prev=curr;
            curr=curr->next;
        }
        // free(curr);
        return head;
        
    }
};