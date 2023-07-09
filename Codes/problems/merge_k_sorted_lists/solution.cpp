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
    ListNode* merge(ListNode* a, ListNode* b)
    {
        if(a==nullptr) return b;
        if(b==nullptr) return a;

        if(a->val < b->val)
        {
            a->next = merge(a->next,b);
            return a;
        }
        else
        {
            b->next = merge(a,b->next);
            return b;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n = lists.size();

        int start = 0, end = n-1, temp = 0;
        while(end>0)
        {
            start = 0;
            temp = end;
            while(start < temp)
            {
                lists[start] = merge(lists[start],lists[temp]);
                start++; temp--;

                if(start >= temp) end = temp;
            }
        }
        return n==0? nullptr:lists[0];
    }
};