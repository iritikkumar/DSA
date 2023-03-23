#include <stdio.h>
#include <stdlib.h>
struct node
{
    int item;
    struct node *next;
};
void insertAtFirst(struct node **s, int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    n->next = *s;
    *s = n;
}
void insertBetween(struct node **s, int data, int index)
{
    int count = 0;
    struct node *n, *t = *s;
    n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    while (count != index)
    {
        t = t->next;
        count++;
    }
    n->next = t->next;
    t->next = n;
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
void deleteAtFirst(struct node **s)
{
    struct node *t = *s;
    *s = t->next;
    free(t);
}
void deleteAtLast(struct node **s)
{
    int count = 0;
    struct node *t = *s;
    while (t->next != NULL)
    {
        t = t->next;
        count++;
    }
    count--;
    t = *s;
    while (count--)
    {
        t = t->next;
    }
    free(t->next);
    t->next = NULL;
}
void deleteParticularNode(struct node **s, int index)
{
    struct node *dlt, *t = *s;
    if (index == 0)
        deleteAtFirst(s);
    else
    {
        while (--index)
        {
            t = t->next;
        }
        dlt = t->next;
        t->next = dlt->next;
        free(dlt);
    }
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
    struct node *start = NULL;
    insertAtLast(&start, 10);
    insertAtFirst(&start, 23);
    insertAtLast(&start, 20);
    insertAtLast(&start, 5);
    insertAtFirst(&start, 73);
    insertBetween(&start, 100, 3);
    deleteParticularNode(&start, 1);
    viewList(&start);
    return 0;
}