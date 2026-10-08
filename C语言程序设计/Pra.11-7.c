#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */

struct ListNode *readlist()
{
    struct ListNode *p, *head, *tail;
    int num;
    int size = sizeof(struct ListNode);
    scanf("%d", &num);
    head = tail = NULL;
    while(num != -1){
        p = (struct ListNode *)malloc(size);
        p->data = num;
        p->next = NULL;
        if(head == NULL){
            head = tail = p;
        }
        else{
            tail->next = p;
            tail = p;
        }
        scanf("%d", &num);
    }
    return head;
}

struct ListNode *getodd( struct ListNode **L )
{
    struct ListNode *oddhead, *oddtail, *evenhead, *eventail, *p;
    oddhead = oddtail = evenhead = eventail = NULL;
    p = *L;
    while(p != NULL){
        struct ListNode *next = p->next;
        p->next = NULL;
        if(p->data % 2 != 0){
            if(oddhead==NULL){
                oddhead = oddtail = p;    
            }
            else{
                oddtail->next = p;
                oddtail = p;
            }
        }
        else{
            if(evenhead==NULL){
                evenhead = eventail = p;
            }
            else{
                eventail->next = p;
                eventail = p;
            }
        }
        p = next;
    }
    *L = evenhead;
    return oddhead;
}