#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Stack
{
    int capacity;
    int top;
    int *ptr;
};
struct Stack* createStack(int size)
{
    struct Stack *S = (struct Stack *)malloc(sizeof(struct Stack));
    S->capacity = size;
    S->top = -1;
    S->ptr = (int *)malloc(sizeof(int) * size);
    return S;
}
void push(struct Stack *S, int data)
{
    if (S->top + 1 == S->capacity)
        printf("Overflow Stack");
    else
    {
        (S->top)++;
        S->ptr[S->top] = data;
    }
}
void pop(struct Stack *S)
{
    if (S->top == -1)
    {
        printf("Empty stack\n");
        getch();
    }
    else
        (S->top)--;
}
int peek(struct Stack *S)
{
    if (S->top == -1)
    {
        printf("Empty stack\n");
        return;
    }
    else
        return S->ptr[S->top];
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
    int data, k;
    struct Stack *S;
    S = createStack(10);
    while (1)
    {
        system("cls");
        switch (menu())
        {
        case 1:
            printf("Enter the data you want to push: ");
            scanf("%d", &data);
            push(S, data);
            break;
        case 2:
            pop(S);
            break;
        case 3:
            k = peek(S);
            printf("%d\n", k);
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