#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *next;
};
struct node *find(struct node *start, int data)
{
    while (start)
    {
        if (start->item == data)
            return start;
        start = start->next;
    }
    return NULL;
}
void insertLast(struct node **s, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    n->next = NULL;
    if (*s == NULL)
        *s = n;
    else
    {
        struct node *t = *s;
        while (t->next != NULL)
            t = t->next;
        t->next = n;
    }
}

void insertFirst(struct node **s, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    n->next = *s;
    *s = n;
}
void insertAfter(struct node *temp, int data)
{
    if (temp == NULL)
        printf("Item not found\n");
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->item = data;
        n->next = temp->next;
        temp->next = n;
    }
}
void deleteLast(struct node **s)
{
    if (*s == NULL)
        printf("\nEmpty List");
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

void deleteFirst(struct node **s)
{
    if (*s == NULL)
        printf("\nEmpty List");
    else
    {
        struct node *temp = *s;
        *s = temp->next;
        free(temp);
    }
}
void deleteParticular(struct node **s, struct node *temp)
{

    if (*s == NULL)
        printf("Empty List");
    else if (temp == NULL)
        printf("Item not found\n");
    else if (temp == *s)
        deleteFirst(s);
    else
    {
        struct node *t = *s;
        while (t->next != temp)
            t = t->next;
        t->next = temp->next;
        free(temp);
    }
}
void viewList(struct node *start)
{
    struct node *temp = start;
    while (temp != NULL)
    {
        printf("%d ", temp->item);
        temp = temp->next;
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
    // insertFirst(&start,11);
    // insertFirst(&start,13);
    // insertFirst(&start,18);
    // insertLast(&start,61);
    // insertLast(&start,48);
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
            insertAfter(find(start, y), x);
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