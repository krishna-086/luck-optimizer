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
    ListNode* revers(ListNode* h){
        ListNode* prev=NULL;
        ListNode* curr=h;
        while(curr){
            ListNode* nextt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow, *fast;
        slow=fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead=revers(slow->next);
        ListNode *first=head, *second=newHead;
        while(second){
            if(first->val!=second->val){
                revers(newHead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        revers(newHead);
        return true;
    }
};
