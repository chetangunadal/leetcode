/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    
   struct ListNode *rev=0,*buf;
   while(head){
    buf=head->next;
    head->next=rev;
    rev=head;
    head=buf;
   } 
   return rev;
}