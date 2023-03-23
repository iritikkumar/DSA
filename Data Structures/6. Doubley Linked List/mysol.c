#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *prev, *next;
};
struct node *find(struct node *start, int data)
{
    while (start)
    {
        if (start->item == data)
            return start;
        start = start->next;
    }
    printf("Item not found\n");
    return NULL;
}
void insertLast(struct node **s, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    n->next = NULL;
    if (*s == NULL)
    {
        n->prev = NULL;
        *s = n;
    }
    else
    {
        struct node *t = *s;
        while (t->next != NULL)
            t = t->next;
        t->next = n;
        n->prev = t;
    }
}
void insertFirst(struct node **s, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    n->prev = NULL;
    n->next = *s;
    if(*s==NULL)
        *s = n;
    else{
        (*s)->prev = n;
        *s = n;
    }
}
void insertAfter(struct node *temp, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    n->next = temp->next;
    n->prev = temp;
    // temp->next = n;
    // n->next->prev = n;
    if(temp->next!=NULL)
        temp->next->prev = n;
    temp->next = n;
}
void deleteLast(struct node **s)
{
    if (*s == NULL)
        printf("List is Empty\n");
    else
    {
        struct node *t = *s;
        while (t->next != NULL)
            t = t->next;
        if (t->prev == NULL)
        {
            free(*s);
            *s = NULL;
        }
        else
        {
            // t = t->prev;
            // free(t->next);
            // t->next = NULL;
            t->prev->next = NULL;
            free(t);
        }
    }
}
void deleteFirst(struct node **s)
{
    if (*s == NULL)
        printf("List is Empty");
    else
    {
        struct node *temp;
        temp = *s;
        *s = temp->next;
        if(*s!=NULL)
            (*s)->prev = NULL;
        free(temp);
    }
}
void deleteParticular(struct node **s, struct node *temp)
{
    if (*s == NULL)
        printf("Empty list");
    else if (temp == *s)
            deleteFirst(s);
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}
void viewList(struct node *start)
{
    while (start)
    {
        printf("%d ", start->item);
        start = start->next;
    }
    printf("\n");
}
int menu()
{
    int choice;
    printf("1. Insert First\n");
    printf("2. Insert Last\n");
    printf("3. Insert After\n");
    printf("4. Delete First\n");
    printf("5. Delete Last \n");
    printf("6. Delete Particular \n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}
int main()
{
    struct node *start = NULL;
    int x, y;
    struct node *last = NULL;
    insertFirst(&last,11);
    insertFirst(&last,13);
    insertFirst(&last,18);
    insertLast(&last,61);
    insertLast(&last,48);
    while (1)
    {
        system("cls");
        viewList(last);
        switch (menu())
        {
        case 1:
            printf("Enter the value you want to insert: ");
            scanf("%d", &x);
            insertFirst(&last, x);
            break;
        case 2:
            printf("Enter the value you want to insert: ");
            scanf("%d", &x);
            insertLast(&last, x);
            break;
        case 3:
            printf("Enter the value after which you want to insert: ");
            scanf("%d", &y);
            printf("Enter the value you want to insert: ");
            scanf("%d", &x);
            insertAfter(find(last, y), x);
            break;
        case 4:
            deleteFirst(&last);
            break;
        case 5:
            deleteLast(&last);
            break;
        case 6:
            printf("Enter the value you want to delete: ");
            scanf("%d", &x);
            deleteParticular(&last, find(last, x));
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid Choice...Retry...");
        }
    }
    return 0;
}