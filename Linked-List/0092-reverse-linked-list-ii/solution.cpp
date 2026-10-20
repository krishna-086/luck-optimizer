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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL || left==right) return head;
        int c=0;

        ListNode *dummy=new ListNode(0);
        ListNode *temp=dummy;
        dummy->next=head;
        while(temp!=NULL){
            c++;
            if(c==left) break;
            temp=temp->next;
        }
        c=0;
        ListNode *start=temp;
        ListNode *prev=NULL;
        ListNode *curr=temp->next;
        ListNode *end1=curr;
        ListNode *nextt=curr->next;
        while(curr!=NULL){
            c++;
            curr->next=prev;
            prev=curr;
            curr=nextt;
            if(nextt!=NULL) nextt=nextt->next;
            if(c==right-left+1) break;
        }
        start->next=prev;
        end1->next=curr;
        head=dummy->next;
        delete dummy;
        return head;

        
    }
};
