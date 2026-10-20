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
    ListNode* merge(ListNode* lhead, ListNode* rhead){
        ListNode* dummy= new ListNode(0);
        ListNode* t=dummy;
        ListNode *l=lhead, *r=rhead;
        while(l!=NULL && r!=NULL){
            if(l->val<=r->val){
                t->next=l;
                t=t->next;
                l=l->next;
            }
            else{
                t->next=r;
                t=t->next;
                r=r->next;
            }
        }
        if(l!=NULL) t->next=l;
        if(r!=NULL) t->next=r;
        t=dummy->next;
        delete dummy;
        return t;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *slow=head, *fast=head, *prev=NULL;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rhead=slow->next;
        slow->next=NULL;
        head=sortList(head);
        rhead=sortList(rhead);
        head=merge(head, rhead);
        return head;



    }
};
