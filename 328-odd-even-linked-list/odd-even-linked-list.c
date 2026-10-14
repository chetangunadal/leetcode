/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
struct ListNode o,e;
struct ListNode *od=&o,*ev=&e;
struct ListNode *p=head;
    while(p){
        od->next=p;
        od=od->next;
        p=p->next;
        if(p==0)
        break;
        ev->next=p;
        ev=ev->next;
        p=p->next;
    }
od->next=e.next;
ev->next=0;
return o.next;    
}