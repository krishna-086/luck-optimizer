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
        if(head==NULL) return head;
        Node* dummy=new Node(0);
        Node* curr=head;
        //putting new nodes in between
        while(curr){
            Node* temp=new Node(curr->val);
            temp->next=curr->next;
            curr->next=temp;
            curr=curr->next->next;
        }
        //connecting randoms
        curr=head;
        Node* curr2=curr->next;
        while(curr){
            if(curr->random!=NULL){
                curr2->random=curr->random->next;
            }
            else{
                curr2->random=curr->random;
            }
            curr=curr2->next;
            if(curr!=NULL) curr2=curr->next;
        }
        curr=head;
        curr2=head->next;
        //connecting next
        dummy->next=curr2;
        while(curr){
            curr->next=curr2->next;
            curr=curr->next;
            if(curr!=NULL){
                curr2->next=curr->next;
                curr2=curr->next;
            } 
            
        }
        return dummy->next;
    }
};
