/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* detectCycle(struct ListNode* head) {
    struct ListNode *p = head, *q = head;

    while (p && p->next) {
        p = p->next->next;
        q = q->next;

        if (p == q) {

            p = head;
            while (p != q) {
                p = p->next;
                q = q->next;
            }
            return p;
            
        }
    }
    return 0;
}