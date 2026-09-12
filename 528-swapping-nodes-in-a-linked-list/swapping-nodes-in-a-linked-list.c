/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    if(head==0 || head->next==0)
    return head;
struct ListNode* p=head,*q;
long i,c=0,j;
while (p)
{
    c++;
    if(c==k)
    q=p;
    p=p->next;
}
p=head;
for(i=0;i<c-k;i++)
p=p->next;

k=q->val;
q->val=p->val;
p->val=k;

return head;
}