#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
int main(int argc, char *argv[]) 
{
    struct node *head = NULL;
    struct node *p,*q,*t;
    int i,a;
    for (i = 0; i < 5; i++) {
        p = (struct node *)malloc(sizeof(struct node ));
        scanf("%d",&a);
        p->data = a;
        if (head == NULL) {
            head = p;
        }else {
            q->next = p;
        }
        q = p;
    }
    t = head;
    while (t != NULL) {
        printf("%d",t->data);
        t = t->next;
    }
    return 0;
}