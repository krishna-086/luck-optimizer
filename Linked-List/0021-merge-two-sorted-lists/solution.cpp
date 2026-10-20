class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Dummy node to simplify edge cases
        ListNode dummy(0);
        ListNode* tail = &dummy;

        // While both lists are not empty
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;   // attach list1 node
                list1 = list1->next;
            } else {
                tail->next = list2;   // attach list2 node
                list2 = list2->next;
            }
            tail = tail->next;        // move tail
        }

        // Attach the remaining nodes
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        return dummy.next;  // head of merged list
    }
};
