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
    ListNode* findNode(ListNode* head, int n)
    {
        ListNode* curr = head;
        int i=1;
        while(i!=n)
        {
            curr=curr->next;
            i++;
        }
        return curr;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* curr = head;
        int size=0;
        while(curr!=NULL)
        {
            size++;
            curr=curr->next;
        }
        
        ListNode* swap1 = findNode(head,k);
        ListNode* swap2 = findNode(head,size-k+1);
        
        swap(swap1->val,swap2->val);
        
        return head;
    }
};