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
    bool hasCycle(ListNode *head) {
        
        if(head==NULL)
            return false;
        if(head->next==NULL)
            return false;
        int k=0;
        head->val = 100001+k;
        k++;
        do
        {
            head->val = 100001+k;
            ListNode *temp = head->next;
            head->next=NULL;
            head=temp;
            k++;
        }while(head->next!=NULL);
        
        if(head->val > 100000)
            return true;
        return false;
        
    }
};