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
    set<ListNode*> st;
    bool hasCycle(ListNode *head) {

        ListNode* curr = head;
        ListNode* temp;
        while(curr)
        {
            if(st.count(curr)) return true;
            st.insert(curr);
            temp = curr;
            curr = curr->next;
            temp->next = NULL;
        }
        return false;
    }
};
