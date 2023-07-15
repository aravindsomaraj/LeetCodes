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
    bool isPalindrome(ListNode* head) {

        ListNode *slow = head, *fast = head;
        stack<ListNode*> st;
        while(fast && fast->next)
        { 
            st.push(slow); 
            slow = slow->next; 
            fast = fast->next->next;
        }
        if(fast) st.push(slow); 
        while(!st.empty() && st.top()->val==slow->val)
        {
            slow = slow->next;
            st.pop();
        }
        return st.empty()&&!slow;
    }
};
