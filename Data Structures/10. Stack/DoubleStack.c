#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct DoubleStack
{
    int capacity;
    int top1, top2;
    int *ptr;
};
struct DoubleStack *createStack(int size)
{
    struct DoubleStack *n = (struct DoubleStack *)malloc(sizeof(struct DoubleStack));
    n->capacity = size;
    n->top1 = -1;
    n->top2 = size;
    n->ptr = (int *)malloc(sizeof(int) * size);
    return n;
}
void push1(struct DoubleStack *S, int data)
{
    if (S->top1 + 1 == S->top2)
        printf("Stack Overflow\n");
    else
    {
        S->top1 += 1;
        S->ptr[S->top1] = data;
    }
}
void push2(struct DoubleStack *S, int data)
{
    if (S->top1 + 1 == S->top2)
        printf("Stack Overflow\n");
    else
    {
        S->top2 -= 1;
        S->ptr[S->top2] = data;
    }
}
void pop1(struct DoubleStack *S)
{
    if (S->top1 == -1)
        printf("Underflow\n");
    else
        S->top1 -= 1;
}
void pop2(struct DoubleStack *S)
{
    if (S->top2 == S->capacity + 1)
        printf("Underflow\n");
    else
        S->top2 += 1;
}
int peek1(struct DoubleStack *S)
{
    if (S->top1 == -1)
    {
        printf("Empty Stack 1\n");
        return 0;
    }
    else
        return S->ptr[S->top1];
}
int peek2(struct DoubleStack *S)
{
    if (S->top2 == S->capacity + 1)
    {
        printf("Empty Stack 2\n");
        return 0;
    }
    else
        return S->ptr[S->top2];
}
int menu()
{
    int ch;
    printf("1. Push1\n");
    printf("2. Pop1\n");
    printf("3. Peek1\n");
    printf("4. Push2\n");
    printf("5. Pop2\n");
    printf("6. Peek2\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}
int main()
{
    int k,data;
    struct DoubleStack *S;
    S = createStack(5);
    while (1)
    {
        system("cls");
        switch (menu())
        {
        case 1:
            printf("Enter the data you want to push: ");
            scanf("%d", &data);
            push1(S, data);
            break;
        case 2:
            pop1(S);
            break;
        case 3:
            k = peek1(S);
            printf("%d\n", k);
            getch();
            break;
        case 4:
            printf("Enter the data you want to push: ");
            scanf("%d", &data);
            push2(S, data);
            break;
        case 5:
            pop2(S);
            break;
        case 6:
            k = peek2(S);
            printf("%d\n", k);
            getch();
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid choice...Retry...");
            break;
        }
    }
    return 0;
}