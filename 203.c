/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *p;
    if(head==NULL){
        return NULL;
    }
    struct ListNode *h=malloc(sizeof(struct ListNode));
    h->next=head;
    p=h;
    while(p->next!=NULL){
        if(p->next->val==val){
            struct ListNode *s=p->next;
            p->next=s->next;
            free(s);
        }
        else{p=p->next;}
    }
    head=h->next;
    free(h);
    h=NULL;
    return head;
}