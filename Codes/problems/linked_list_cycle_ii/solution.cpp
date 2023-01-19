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
    ListNode *detectCycle(ListNode *head) {

        unordered_map<ListNode*,int> mp;
        ListNode* curr=head;
        while(1)
        {
            mp[curr]++;
            if(mp[curr]==2)
                return curr;
            if(curr==0)
                break;
            curr=curr->next;
        }
        return NULL;
    }
};