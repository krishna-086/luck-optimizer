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
    ListNode *detectCycle(ListNode *head) {
        ListNode *sl=head;
        ListNode *fa=head;
        int f=0;
        while(fa!= NULL && fa->next!=NULL){
            sl=sl->next;
            fa=fa->next->next;
            if(sl==fa){
                f=1;
                break;
                
            }
        }
        if(f==0) return NULL;
        sl=head;
        while(fa->next!=NULL){
            if(sl==fa) return sl;
            sl=sl->next;
            fa=fa->next;
            
        }
        return NULL;
        
    }
};
