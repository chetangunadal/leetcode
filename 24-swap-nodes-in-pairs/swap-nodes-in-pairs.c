/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head==0 || head->next==0)
    return head;
struct ListNode *first=head,*sec=head->next,*prve=0,*third;

 while(sec && first)
    {
        third=sec->next;
        sec->next=first;
        first->next=third;

        if(prve==0)
        head=sec;
        else
        prve->next=sec;

        prve=first;
        first=third;
        if(third)
        sec=third->next;
        else
        sec=0;
       
    }    
return head;
}