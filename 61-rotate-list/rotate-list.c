/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==0||head->next==0)
    return head;
    struct ListNode*p=head;
    int c=0;
    while(p)
    c++,p=p->next;

    k=k%c;
p=head;
    while(p->next)
    p=p->next;

    p->next=head;
    p=head;
k=c-k-1;
while(k--)
p=p->next;

head=p->next;
p->next=0;
return head;
}