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
    ListNode* partition(ListNode* head, int x) {

        queue<int> l,r;
        ListNode* curr = head;
        while(curr)
        {
            if(curr->val < x) l.push(curr->val);
            else r.push(curr->val);
            curr = curr->next;
        }

        curr = head;
        while(!l.empty())
        {
            curr->val = l.front();
            l.pop();
            curr = curr->next;
        }
        while(!r.empty())
        {
            curr->val = r.front();
            r.pop();
            curr = curr->next;
        }
        return head;
    }
};
