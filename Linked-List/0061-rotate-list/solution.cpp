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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *slow=head, *fast=head;
        int c=0;
        while(slow){
            c++;
            slow=slow->next;
        }
        slow=head;
        k=k%c;
        if(k==0) return head;

        while(fast){
            fast=fast->next;
            k--;
            if(k==0) break;
        }
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=head;
        ListNode* nhead=slow->next;
        slow->next=NULL;
        return nhead;
    }
};
