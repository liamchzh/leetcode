#include<stdio.h>
#include<stdlib.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);


struct ListNode {
    int val;
    struct ListNode *next;
};


int main() {
    struct ListNode* p1= (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p2= (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p3= (struct ListNode*)malloc(sizeof(struct ListNode));

    p1->val = 1;
    p1->next = p3;
    p2->val = 0;
    p2->next = NULL;
    p3->val = 8;
    p3->next = NULL;

    struct ListNode *result;
    result = addTwoNumbers(p1, p2);

    return 0;
}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    if(l1 == NULL && l2 == NULL) {
        return NULL; 
    }

    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p;
    p = result;

    int cn = 0;

    while (l1->next != NULL || l2->next != NULL) {
        struct ListNode* l = (struct ListNode*)malloc(sizeof(struct ListNode));

        p->val = ((l1->val + l2->val) % 10) + cn;
        cn = (l1->val + l2->val) / 10;
        p->next = l;
        p = p->next;

        if(l1->next != NULL){
            l1 = l1->next;
        }

        if(l2->next != NULL){
            l2 = l2->next;
        }
    }

    p->val = ((l1->val + l2->val) % 10) + cn;
    cn = (l1->val + l2->val) / 10;

    printf("%d\n", result->val);

    if(cn != 0) {
        p->val = cn;
    }

    return result;
}
