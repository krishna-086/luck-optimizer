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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>> pq;
        for(int i=0; i<lists.size(); i++){
            if(lists[i]!=NULL){
                int val=lists[i]->val;
                ListNode* node=lists[i];
                pq.push({val, node});
            }
        }
        ListNode *curr= new ListNode(0);
        ListNode *head=curr;
        while(pq.size()>0){
            curr->next=pq.top().second;
            pq.pop();
            curr=curr->next;
            ListNode* temp=curr;
            
            if(temp->next!=NULL){
                int val=temp->next->val;
                ListNode* node=temp->next;
                pq.push({val, node});
            }
            
        }
        return head->next;
    }
};
