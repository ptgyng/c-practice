/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL){
        return NULL;
    }
    struct ListNode *p=head;
    while(p->next!=NULL){
        if(p->next->val==p->val){
            struct ListNode *s=p->next;
            p->next=s->next;
            free(s);
            s=NULL;
        }
        else{p=p->next;}
    }
    return head;
}