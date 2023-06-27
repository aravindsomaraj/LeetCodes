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
    ListNode* oddEvenList(ListNode* head) {

        if(!head || !head->next || !(head->next->next))
            return head;
        ListNode* one = head, *two = head->next, *two_head = head->next;
        

        while(one && two)
        {
            one->next = two->next;
            one=two;
            two=two->next;
        }
        one = head;
        while(one->next)
            one = one->next;
        one->next = two_head;
        return head;

    }
};