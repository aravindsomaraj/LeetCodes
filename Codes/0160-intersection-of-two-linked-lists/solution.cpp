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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *curr = headA;
        int c1=0,c2=0;
        while(curr!=NULL)
        {
            c1++;
            curr=curr->next;
        }
        curr=headB;
        while(curr!=NULL)
        {
            c2++;
            curr=curr->next;
        }
        ListNode *small,*big;
        int sc,bc;
        if(c1>c2)
        {
            sc=c2;
            bc=c1;
            small = headB;
            big = headA;
            
        }
        else
        {
            sc=c1;
            bc=c2;
            small=headA;
            big=headB;
        }
        
        while(bc!=sc)
        {
            bc--;
            big=big->next;
        }
        ListNode *ans;
        while(big!=small)
        {
            big=big->next;
            small=small->next;
        }
            
        return big;
        
    }
};
