/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {

if(head==0)
return head;
struct ListNode*p=head,*q;
while(p->next){
    q=p;
    p=p->next;
    if(p->val==val)
    {
        q->next=p->next;
        p=q;
    }
    
}
while(head && head->val==val)
head=head->next;
return head;
    
}