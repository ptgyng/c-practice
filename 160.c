暴力：
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *h1=headA,*h2=headB;
    while(h1!=NULL){
        if(h1==h2){
            break;
        }
        if(h2!=NULL){
            h2=h2->next;
        }
        if(h2==NULL){
            h1=h1->next;
            h2=headB;
        }
    }
    return h1;
}
双指针：
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *h1=headA,*h2=headB;
    while(h1!=h2){
        h1=h1==NULL?headB:h1->next;
        h2=h2==NULL?headA:h2->next;
    }
    return h1;
}