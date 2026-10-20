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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3= new ListNode(0);
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* t3=l3;
        ListNode* prev=l3;
        
        int c=0, sum;
        while(t1!=NULL && t2!=NULL){
            sum=t1->val+t2->val;
            sum=sum+c;
            if(sum>=10){
                sum=sum%10;
                t3->val=sum;
                c=1;
            }
            else{
                t3->val=sum;
                c=0;
            }
            t1=t1->next;
            t2=t2->next;
            ListNode* t=new ListNode(0);

            t3->next=t;
            prev=t3;
            t3=t;
        }
        while(t1!=NULL){
            sum=t1->val;
            sum=sum+c;
            if(sum>=10){
                sum=sum%10;
                t3->val=sum;
                c=1;
            }
            else{
                t3->val=sum;
                c=0;
            }
            t1=t1->next;
            ListNode* t=new ListNode(0);

            t3->next=t;
            prev=t3;
            t3=t;
        }
        while(t2!=NULL){
            sum=t2->val;
            sum=sum+c;
            if(sum>=10){
                sum=sum%10;
                t3->val=sum;
                c=1;
            }
            else{
                t3->val=sum;
                c=0;
            }
            t2=t2->next;
            ListNode* t=new ListNode(0);

            t3->next=t;
            prev=t3;
            t3=t;
        }
        if(c==1){
            t3->val=c;
        }
        else{
            prev->next=NULL;
            delete t3;
        }
        return l3;
    }
};
