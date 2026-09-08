/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if (head == 0)
        return 0;
    struct ListNode *p = head, *q;
    int c = 0, i, j;
    while (p) {
        c++;
        p = p->next;
    }
    for (i = 0; i < c && n; i++) {
        p = head;
        for (j = 0; j < c - i - 1; j++) {
            q = p;
            p = p->next;
        }
        n--;
    }
    if (p == head) {
        head = p->next;
    } else {
        q->next = p->next;
    }
    free(p);
    return head;
}