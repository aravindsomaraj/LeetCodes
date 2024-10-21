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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* curr = head, *iter = head;
        stack<ListNode*> st;
        while(curr)
        {
            int val = curr->val;
            while(iter != curr)
            {
                st.push(iter);
                iter = iter->next;
            }

            while(!st.empty() && st.top()->val > val)
            {
                iter->val = st.top()->val;
                iter = st.top();
                st.pop();
            }
            iter->val = val;
            curr = curr->next;
        }
        return head;
    }
};
