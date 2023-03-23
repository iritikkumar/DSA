#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int item;
    struct node *next;
};

void push(struct node **t, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    n->next = *t;
    *t = n;
}
void pop(struct node **t)
{
    if (*t == NULL)
    {
        printf("Empty stack\n");
        getch();
    }
    else
    {
        struct node *r = *t;
        *t = r->next;
        free(r);
    }
}
int peek(struct node *top)
{
    if (top == NULL)
    {
        printf("Empty stack\n");
        return;
    }
    else
        return top->item;
}
int menu()
{
    int ch;
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}
int main()
{
    int data,k;
    struct node *top = NULL;
    while (1)
    {
        system("cls");
        switch (menu())
        {
        case 1:
            printf("Enter the data you want to push: ");
            scanf("%d", &data);
            push(&top, data);
            break;
        case 2:
            pop(&top);
            break;
        case 3:
            k = peek(top);
            printf("%d\n",k);
            getch();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice...Retry...");
            break;
        }
    }
    return 0;
}