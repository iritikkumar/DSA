#include <stdio.h>
#include <stdlib.h>
struct node
{
    int item;
    struct node *next;
};
struct node *find(struct node *start, int data)
{
    int count = 0;
    while (start)
    {
        count++;
        printf("%d ",count);
        if (start->item == data)
            return start; 
        start = start->next;
    }
    return NULL;
}
void insertAtLast(struct node **s, int data)
{
    struct node *n, *t;
    n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    n->next = NULL;
    if (*s == NULL)
        *s = n;
    else
    {
        t = *s;
        while (t->next != NULL)
            t = t->next;
        t->next = n;
    }
}
void insertAfter(struct node *temp, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    n->next = temp->next;
    temp->next = n;
}
void deleteAtFirst(struct node **s)
{
    if (*s == NULL)
        printf("List is empty");
    else
    {
        struct node *t = *s;
        *s = t->next;
        free(t);
    }
}
void deleteAtLast(struct node **s)
{
    if (*s == NULL)
        printf("List is empty");
    else
    {
        struct node *t1 = NULL, *t2 = *s;
        while (t2->next != NULL)
        {
            t1 = t2;
            t2 = t2->next;
        } 
        if (t1 == NULL)
            *s = NULL;
        else
            t1->next = NULL;
        free(t2);
    }
}
void deleteParticular(struct node **s, struct node *temp)
{
    struct node *t = *s;
    while (t->next != temp)
        t = t->next;
    t->next = temp->next;
    free(temp);
}
void viewList(struct node **s)
{
    if (*s == NULL)
        printf("Empty list");
    else
    {
        struct node *t = *s;
        while (t != NULL)
        {
            printf("%d ", t->item);
            t = t->next;
        }
        printf("\n");
    }
}


int main()
{
    struct node *k,*start = NULL;
    insertAtLast(&start,2);
    insertAtLast(&start,4);
    insertAtLast(&start,6);
    insertAtLast(&start,8);
    insertAtLast(&start,10);
    k = find(start,10);
    printf("%d",k);
    return 0;
}
