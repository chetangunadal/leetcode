/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if(head ==0||head->next==0)
    return 0;
    struct ListNode *s=head,*f=head,*p;
    while(f && f->next)
    { 
        p=s;
        s=s->next;
        f=f->next->next;
    }
 
    p->next=s->next;
    free(s);
    return head;
}