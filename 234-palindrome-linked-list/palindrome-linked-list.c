/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode*f=head,*s=head,*rev=0;
    while(f&& f->next)
    {
        f=f->next->next;
        s=s->next;
    }
   while(s)
   {
    f=s->next;
    s->next=rev;
    rev=s;
    s=f;
   }
f=head;
    while(rev&&f->val==rev->val)
    {
        f=f->next,rev=rev->next;
    }
if(rev)
return false;
else
return true;
}