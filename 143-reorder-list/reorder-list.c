/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {

    if (head == 0 || head->next == 0)
        return;

    struct ListNode *s = head, *f = head, *p;
    while (f && f->next) { // got to the middel
        p = s;
        s = s->next;
        f = f->next->next;
    }
    s = s->next;
    p->next->next = 0;
    struct ListNode* rev = 0;
    while (s) {
        f = s->next;
        s->next = rev;
        rev = s;
        s = f;
    }

    f = head;

    while (rev) {

        s = f->next;

        f->next = rev;
        f = f->next;

        rev = rev->next;
        f->next = s;

        f = s;
    }
}