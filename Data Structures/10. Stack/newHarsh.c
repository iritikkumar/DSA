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
int main()
{
    int data, k;
    struct Stack *S;
    S = createStack(10);
    return 0;
}