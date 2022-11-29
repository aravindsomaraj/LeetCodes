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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==0 && list2==0)
            return 0;
        // ListNode* curr = list1;
        // ListNode* curr2 = list2;
        ListNode* a = new ListNode(0);
        ListNode* curr = new ListNode();
        ListNode* prev = new ListNode();
        a->next = curr;
        while(list1!=NULL && list2!=NULL)
        {
            // curr = new ListNode(0);
            // if(a->next==NULL)
            //     a->next=curr;
            if(list1->val < list2->val)
            {
                if(curr==NULL)
                    cout << "blah";
                curr->val = list1->val;
                list1=list1->next;
            }
            else
            {
                curr->val = list2->val;
                list2=list2->next;
            }
            prev=curr;
            ListNode *newnode = new ListNode();
            curr->next=newnode;
            curr=curr->next;
        }
        while(list1!=NULL)
        {
            // curr = new ListNode(0);
            prev=curr;
            curr->val = list1->val;
            list1=list1->next;
            ListNode *newnode = new ListNode();
            curr->next=newnode;
            curr=curr->next;
        }
        while(list2!=NULL)
        {
            // curr = new ListNode(0);
            prev=curr;
            curr->val = list2->val;
            list2=list2->next;
            ListNode *newnode = new ListNode();
            curr->next=newnode;
            curr=curr->next;
        }
        prev->next=NULL;
        return a->next;
    }
};
