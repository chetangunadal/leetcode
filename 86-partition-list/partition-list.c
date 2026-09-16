/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode ld,gd;
    ld.next=gd.next=0;
    struct ListNode *l=&ld,*g=&gd;
    while(head)
    {
        if(head->val<x){
            l->next=head;
            l=l->next;
        }
        else{
            g->next=head;
            g=g->next;
        }
        head=head->next;
    }
    g->next=0;
    l->next=gd.next;
    
    return ld.next;
}