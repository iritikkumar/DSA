#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct DynamicArray
{
    int capacity;
    int top;
    int *ptr;
};
struct DynamicArray* createArray(int size)
{
    struct DynamicArray *arr = (struct DynamicArray *)malloc(sizeof(struct DynamicArray));
    arr->capacity = size;
    arr->top = -1;
    arr->ptr = (int *)malloc(sizeof(int) * size);
    return arr;
}
void doubleArray(struct DynamicArray *arr)
{
    int *p = (int *)malloc(sizeof(int) * 2 * arr->capacity);
    for (int i = 0; i <= arr->top; i++)
        p[i] = arr->ptr[i];
    arr->capacity *= 2;
    free(arr->ptr);
    arr->ptr = p;
}
void halfArray(struct DynamicArray *arr)
{
    int *p = (int *)malloc(sizeof(int) * arr->capacity / 2);
    for (int i = 0; i <= arr->top; i++)
        p[i] = arr->ptr[i];
    arr->capacity /= 2;
    free(arr->ptr);
    arr->ptr = p;
}
void push(struct DynamicArray *arr, int data)
{
    if (arr->top + 1 == arr->capacity)
        doubleArray(arr);
    (arr->top)++;
    arr->ptr[arr->top] = data;
}
void pop(struct DynamicArray *arr)
{
    if (arr->top == -1)
    {
        printf("Empty stack\n");
        getch();
    }
    else
        (arr->top)--;
    if (arr->capacity / 2 == arr->top + 1 && (arr->top >= 0))
        halfArray(arr);
}
int peek(struct DynamicArray *arr)
{
    if (arr->top == -1)
    {
        printf("Empty stack\n");
        return;
    }
    else
        return arr->ptr[arr->top];
}
int menu()
{
    int ch;
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. View\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}
int main()
{
    int data,k;
    struct DynamicArray *arr;
    arr = createArray(5);
    while (1)
    {
        system("cls");
        printf("%d\n", arr->capacity);
        switch (menu())
        {
        case 1:
            printf("Enter the data you want to push: ");
            scanf("%d", &data);
            push(arr, data);
            break;
        case 2:
            pop(arr);
            break;
        case 3:
            k = peek(arr);
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