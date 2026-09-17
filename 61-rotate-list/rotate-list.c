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
struct ListNode*p=head,*q;
int count=0;
while(p)
{
    count++;
    p=p->next;
}
k=k%count;
while(k--)
{
    p=head;
    q=head;
    while(p->next->next)
    p=p->next;

    head=p->next;
    p->next=0;
    head->next=q;
}
return head;
}

                                                                   
