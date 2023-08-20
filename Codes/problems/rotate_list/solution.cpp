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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        int size = 0;
        ListNode* curr = head;
        while(curr)
        {
            size++; curr=curr->next;
        }
        k = k%size;
        if(k==0)
            return head;
        
        int t = k;
        ListNode *slow = head, *fast = head;
        while(t--) fast = fast->next;
        while(fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* new_head = slow->next;
        slow->next = nullptr;
        fast->next = head;
        return new_head;
    }
};