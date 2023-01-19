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

        if(head==0)
            return false;
        
        if(head->val==100001)
            return true;
        head->val=100001;
        return hasCycle(head->next); 
        
    }
};
