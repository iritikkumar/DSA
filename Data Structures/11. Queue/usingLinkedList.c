#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Queue
{
    int item;
    struct Queue *next;
};
void add(struct Queue **f, struct Queue **r, int data)
{
    struct Queue *n = (struct Queue *)malloc(sizeof(struct Queue));
    n->item = data;
    n->next = NULL;
    if (*r == NULL)
    {
        *f = n;
        *r = n;
    }
    else
    {
        (*r)->next = n;
        *r = n;
    }
}
void delete (struct Queue **f, struct Queue **r)
{
    if (*f == NULL)
        printf("Empty Queue");
    else if(*f == *r)
    {
        free(*f);
        *f = NULL;
        *r = NULL;
    }
    else
    {
        struct Queue *temp = *f;
        *f = temp->next;
        free(temp);
    }
}

int main()
{
    int data;
    struct Queue *front = NULL;
    struct Queue *rear = NULL;
    return 0;
}