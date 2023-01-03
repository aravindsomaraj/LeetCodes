/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node *curr=head;
        while(curr)
        {
            Node *temp=curr->next;
            Node *newnode = new Node(curr->val);
            curr->next = newnode;
            newnode->next = temp;
            curr = temp;
        }
        curr=head;
        while(curr)
        {
            if(curr->random)
                curr->next->random = curr->random->next;
            curr=curr->next->next;
        }

        Node *ans = new Node(0);
        Node *newc = ans;

        while(head)
        {
            newc->next = head->next;
            newc=newc->next;

            head->next=head->next->next;
            head=head->next;
        }
        return ans->next;
    }
};