#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
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
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */

struct ListNode *readlist()
{
    struct ListNode *head, *tail, *p;
    int num;
    int size = sizeof(struct ListNode);
    head = tail = NULL;
    scanf("%d", &num);
    while(num != -1){
        p = (struct ListNode *)malloc(size);
        p -> data = num;
        p -> next = NULL;
        if(head == NULL){
            head = tail = p;
        }
        else{
            tail -> next = p;
            tail = p;
        }
        scanf("%d", &num);
    }
    return head;
}

struct ListNode *deletem( struct ListNode *L, int m )
{
    struct ListNode *ptr1, *ptr2, *p;
    p = L;
    while(p != NULL && p -> data == m){
        ptr2 = p;
        p = p -> next;
        free(ptr2);
    }
    if(p == NULL){
        return NULL;
    }
    ptr1 = p;
    ptr2 = p -> next;
    while(ptr2 != NULL){
        if(ptr2 -> data == m){
            ptr1 -> next = ptr2 -> next;
            free(ptr2);
            ptr2 = ptr1 -> next;
        }
        else{
            ptr1 = ptr2;
            ptr2 = ptr2 -> next;
        }
    }
    return p;
}