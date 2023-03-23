#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *next;
};
struct node *find(struct node *last, int value)
{
    struct node *t = last->next;
    while (t != last)
    {
        if (t->item == value)
            return t;
        t = t->next;
    }
    if (t->item == value)
        return t;
    return NULL;
}
void insertLast(struct node **l, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    if (*l == NULL)
    {
        *l = n;
        n->next = n;
    }
    else
    {
        n->next = (*l)->next;
        (*l)->next = n;
        *l = n;
    }
}
void insertFirst(struct node **l, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    if (*l == NULL)
    {
        *l = n;
        n->next = n;
    }
    else
    {
        n->next = (*l)->next;
        (*l)->next = n;
    }
}
void insertAfter(struct node **l, struct node *temp, int data)
{
    if (temp == NULL)
    {
        printf("Item Not Found");
        getch();
    }
    else if (*l == NULL)
        insertFirst(l, data);
    else
    {
        if (temp == *l)
            insertLast(l, data);
        else
        {
            struct node *n = (struct node *)malloc(sizeof(struct node));
            n->item = data;
            // struct node *t = *l;
            // while (t->next != temp)
            //     t = t->next;
            // if (temp->next != *l)
            n->next = temp->next;
            temp->next = n;
        }
    }
}
void deleteLast(struct node **l)
{
    if (*l == NULL)
    {
        printf("Empty List\n");
        getch();
    }
    else if ((*l)->next == *l)
    {
        free(*l);
        *l = NULL;
    }
    else
    {
        struct node *t = *l;
        while (t->next != *l)
            t = t->next;
        t->next = (*l)->next;
        free(*l);
        *l = t;
    }
}
void deleteFirst(struct node **l)
{
    if (*l == NULL)
    {
        printf("Empty list");
        getch();
    }
    else if ((*l)->next == *l)
    {
        free(*l);
        *l = NULL;
    }
    else
    {
        struct node *temp = (*l)->next;
        (*l)->next = temp->next;
        free(temp);
    }
}
void deleteParticular(struct node **l, struct node *temp)
{
    if (temp == NULL)
    {
        printf("Item Not Found");
        getch();
    }
    else
    {
        struct node *t = (*l)->next;
        while (t->next != temp)
            t = t->next;
        if (t->next == *l)
            *l = t;
        t->next = temp->next;
        free(temp);
    }
}
void viewList(struct node *last)
{
    if (last == NULL)
        printf("Nothing to print. Empty list\n");
    else
    {
        struct node *t = last->next;
        while (t != last)
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
    struct node *last = NULL;
    insertFirst(&last, 11);
    insertFirst(&last, 13);
    insertFirst(&last, 18);
    insertLast(&last, 61);
    insertLast(&last, 48);
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
            insertAfter(&last, find(last, y), x);
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