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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        if(head->val==val){
            ListNode* temp=head;
            head=head->next;
            delete temp;
        }
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            if(temp->val==val){
                //ListNode* t=temp;
                if(temp==head){
                   head=head->next;
                   temp=head;
                   continue;

                }
                if(prev!=NULL){
                    prev->next=temp->next;
                }
                temp=temp->next;
                continue;
                
                
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
        
    }
};
