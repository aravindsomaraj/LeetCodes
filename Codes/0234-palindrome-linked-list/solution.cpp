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
        
        if(head->next==NULL)
            return true;
        ListNode* curr = head;
        stack<int> sp;
        int c=0;
        while(curr!=0)
        {
            c++;
            curr=curr->next;
        }
        
        int m = (c+1)/2;
        curr=head;
        int k=1;
        while(k<=m)
        {
            sp.push(curr->val);
            curr=curr->next;
            k++;
        }
        if(c%2!=0)
        {
            sp.pop();
        }
        while(!sp.empty())
        {
            if(curr->val!=sp.top())
                return false;
            curr=curr->next;
            cout << sp.top();
            sp.pop();
        }
        
        return sp.empty();
    }
};
