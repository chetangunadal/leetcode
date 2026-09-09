/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *head = 0, *p = list1, *q = list2, *t;
    if (p == 0 && q == 0)
        return 0;

    while (p && q) {
        if (p->val < q->val) {
            if (head == 0) {
                head = p;
                t = head;
            } else {
                t->next = p;
                t = t->next;
            }
            p = p->next;
        } else {
            if (head == 0) {
                head = q;
                t = head;
            } else {
                t->next = q;
                t = t->next;
            }
            q = q->next;
        }
    }
    while (p) {
        if (head == 0) {
            head = p;
            t = head;
        } else {
            t->next = p;
            t = t->next;
        }
            p = p->next;
        
    }
    while (q) {
        if (head == 0) {
            head = q;
            t = head;
        } else {
            t->next = q;
            t = t->next;
        }
            q = q->next;
        
    }
    t->next = 0;

    return head;
}