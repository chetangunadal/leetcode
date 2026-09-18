/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* sortList(struct ListNode* head) {
    if(head==0 || head->next==0)
    return head;

    struct ListNode*l=head,*r=head,*p;

    while(l && l->next){
        p=r;
        l=l->next->next;
        r=r->next;
    }

    p->next=0;
    l=head;

    l=sortList(l);
    r=sortList(r);
   struct ListNode dhead;
   dhead.next=0;
   head=&dhead;
    while(l&&r){
        if(l->val>=r->val){
            head->next=r;
            r=r->next;
        }
        else{
            head->next=l;
            l=l->next;
        }
        head=head->next;
    }
    if(l)
head->next=l;
else
head->next=r;

return dhead.next;

}