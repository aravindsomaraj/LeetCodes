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
        deque<int> d;
        while(head)
        {
            d.push_back(head->val);
            head=head->next;
        }
        while(!d.empty() && d.front()==d.back())
        {
            d.pop_front();
            if(!d.empty()) d.pop_back();
        }
        return d.empty();
    }
};