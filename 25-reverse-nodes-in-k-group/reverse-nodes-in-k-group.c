/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    int count = 0;
    struct ListNode* t = head;
    while (count < k) {
        if (t == 0)
            return head;
        t = t->next;
        count++;
    }
    struct ListNode* prve = reverseKGroup(t, k);
    struct ListNode* buff;
    t = head, count = 0;

    while (count < k) {
        buff = t->next;
        t->next = prve;
        prve = t;
        t = buff;
        count++;
    }
    return prve;
}