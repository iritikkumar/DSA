#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int item;
    struct node *next;
};
struct node *find(struct node *start, int value)
{
    struct node *t = start;
    while (t != start->prev)
    {
        if (t->item == value)
            return t;
        t = t->next;
    }
    if (t->item == value)
        return t;
    return NULL;
}
void insertLast(struct node **s, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    if (*s == NULL)
    {
        *s = n;
        n->next = n;
        n->prev = n;
    }
    else
    {
        struct node *t = (*s)->prev;
        n->next = t->next;
        n->prev = t;
        t->next = n;
        (*s)->prev = n;
    }
}
void insertFirst(struct node **s, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    if (*s == NULL)
    {
        *s = n;
        n->next = n;
        n->prev = n;
    }
    else
    {
        struct node *t = (*s)->prev;
        n->next = *s;
        (*s)->prev = n;
        t->next = n;
        n->prev = t;
        (*s) = n;
    }
}
void insertAfter(struct node **s, struct node *temp, int data)
{
    if (temp == NULL)
    {
        printf("Item not found\n");
        getch();
    }
    else if (*s == NULL)
        insertFirst(s, data);
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->item = data;
        n->next = temp->next;
        n->prev = temp;
        temp->next->prev = n;
        temp->next = n;
    }
}
void deleteLast(struct node **s)
{
    if (*s == NULL)
    {
        printf("Empty List\n");
        getch();
    }
    else if (*s == (*s)->next)
    {
        free(*s);
        *s = NULL;
    }
    else
    {
        struct node *t = (*s)->prev->prev;
        free(t->next);
        t->next = (*s);
        (*s)->prev = t;
    }
}
void deleteFirst(struct node **s)
{
    if (*s == NULL)
    {
        printf("Empty List\n");
        getch();
    }
    else if (*s == (*s)->next)
    {
        free(*s);
        *s = NULL;
    }
    else
    {
        struct node *temp = *s;
        *s = temp->next;
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        free(temp);
    }
}
void deleteParticular(struct node **s, struct node *temp)
{
    if (temp == NULL)
    {
        printf("Item not found");
        getch();
    }
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
    if (start == NULL)
        printf("Nothing to print. Empty list\n");
    else
    {
        struct node *t = start;
        while (t != start->prev)
        {
            printf("%d ", t->item);
            t = t->next;
        }
        printf("%d\n", t->item);
    }
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
    int x, y;
    struct node *start = NULL;
    insertFirst(&start, 11);
    insertFirst(&start, 13);
    insertFirst(&start, 18);
    insertLast(&start, 61);
    insertLast(&start, 48);
    while (1)
    {
        system("cls");
        viewList(start);
        switch (menu())
        {
        case 1:
            printf("Enter the value you want to insert: ");
            scanf("%d", &x);
            insertFirst(&start, x);
            break;
        case 2:
            printf("Enter the value you want to insert: ");
            scanf("%d", &x);
            insertLast(&start, x);
            break;
        case 3:
            printf("Enter the value after which you want to insert: ");
            scanf("%d", &y);
            printf("Enter the value you want to insert: ");
            scanf("%d", &x);
            insertAfter(&start, find(start, y), x);
            break;
        case 4:
            deleteFirst(&start);
            break;
        case 5:
            deleteLast(&start);
            break;
        case 6:
            printf("Enter the value you want to delete: ");
            scanf("%d", &x);
            deleteParticular(&start, find(start, x));
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid Choice...Retry...");
        }
    }
    return 0;
}