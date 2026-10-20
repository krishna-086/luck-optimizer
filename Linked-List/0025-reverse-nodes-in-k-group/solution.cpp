class Solution {
    ListNode* getKth(ListNode* t, int k) {
        while (t && --k) t = t->next;
        return t;
    }
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        while (head) {
            ListNode* nx = head->next;
            head->next = prev;
            prev = head;
            head = nx;
        }
        return prev;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0, head);
        ListNode* prevLast = &dummy;
        ListNode* temp = head;
        while (temp) {
            ListNode* kth = getKth(temp, k);
            if (!kth) break;
            ListNode* nextNode = kth->next;
            kth->next = NULL;
            reverse(temp);
            prevLast->next = kth;
            prevLast = temp;
            temp = nextNode;
        }
        prevLast->next = temp;
        return dummy.next;
    }
};
