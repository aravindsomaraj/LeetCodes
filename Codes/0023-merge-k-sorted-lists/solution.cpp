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
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode* ans=NULL;
        if(l1==0)
            return l2;
        if(l2==0)
            return l1;
        
        if(l1->val <= l2->val)
        {
            ans=l1;
            ans->next=merge(l1->next,l2);
        }
        else
        {
            ans=l2;
            ans->next=merge(l1,l2->next);
        }
        return ans;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        int k=lists.size();
        if(k==0)
            return NULL;
        int start=0;
        int end=k-1;
        int temp;
        while(end!=0)
        {
            start=0;
            temp=end;
            while(start<temp)
            {
                lists[start]=merge(lists[start],lists[temp]);
                start++;
                temp--;

                if(start>=temp)
                    end=temp;
            }
            
        }

        return lists[0];
    }
};
