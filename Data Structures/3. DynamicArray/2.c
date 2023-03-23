#include <stdio.h>
#include <stdlib.h>

struct dynamicArray
{
    int capacity;
    int lastindex;
    int *ptr;
};

struct dynamicArray *createArray(int cap)
{
    struct dynamicArray *arr = malloc(sizeof(struct dynamicArray));
    arr->capacity = cap;
    arr->lastindex = -1;
    arr->ptr = malloc(sizeof(int) * cap);
    return arr;
}
void doubleArray(struct dynamicArray *arr)
{
    int i;
    int *p = malloc(sizeof(int) * 2 * arr->capacity);
    arr->capacity *= 2;
    for (i = 0; i <= arr->lastindex; i++)
    {
        p[i] = arr->ptr[i];
    }
    free(arr->ptr);
    arr->ptr = p;
}
void halfArray(struct dynamicArray *arr)
{
    int i;
    int *p = malloc(sizeof(int) * arr->capacity / 2);
    arr->capacity /= 2;
    for (i = 0; i <= arr->lastindex; i++)
    {
        p[i] = arr->ptr[i];
    }
    free(arr->ptr);
    arr->ptr = p;
}
void append(struct dynamicArray *arr, int data)
{
    if (arr->lastindex + 1 == arr->capacity)
        doubleArray(arr);
    arr->lastindex++;
    arr->ptr[arr->lastindex] = data;
}
void viewArray(struct dynamicArray *arr)
{
    for (int i = 0; i <= arr->lastindex; i++)
    {
        printf("%d ", arr->ptr[i]);
    }
    printf("\n");
}
void insert(struct dynamicArray *arr, int index, int value)
{
    int i;
    if (index < 0 || index > arr->lastindex + 1)
        printf("Insertion Error: Invalid Index\n");
    else
    {
        if (arr->lastindex == arr->capacity - 1)
            doubleArray(arr);

        for (i = arr->lastindex; i >= index; i--)
            arr->ptr[i + 1] = arr->ptr[i];
        arr->ptr[index] = value;
        arr->lastindex++;
    }
}
void delete (struct dynamicArray *arr, int index)
{
    int i, temp;
    if (index < 0 || index > arr->lastindex)
        printf("Deletion Error: Invalid Index or Underflow\n");
    else
    {
        for (i = index; i < arr->lastindex; i++)
        {
            // *(arr->ptr + i) = *(arr->ptr + i + 1);
            arr->ptr[i] = arr->ptr[i + 1];
        }
        arr->lastindex--;
    }
}
void viewArray(struct dynamicArray *arr)
{
    int i;
    for (i = 0; i <= arr->lastindex; i++)
    {
        printf("%d ", *(arr->ptr + i));
    }
    printf("\n");
}
void count(struct dynamicArray *arr)
{
    printf("The no of values in this array are %d\n", arr->lastindex + 1);
}
int isValidValue(struct dynamicArray *arr, int index)
{
    if (index >= 0 && index <= arr->lastindex)
        return 1;
    return 0;
}
int get(struct dynamicArray *arr, int index)
{
    if (isValidValue)
        // return *(arr->ptr + index);
        return arr->ptr[index];
    else
        printf("Garbage Value\n");
}
void edit(struct dynamicArray *arr, int index, int newData)
{
    if (index < 0 || index > arr->lastindex)
        printf("Edit Error: Invalid Index\n");
    else
    {
        arr->ptr[index] = newData;
    }
}
int search(struct dynamicArray *arr, int data)
{
    int i;
    for (i = 0; i <= arr->lastindex; i++)
    {
        if (arr->ptr[i] == data)
            return i;
        return -1;
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    struct dynamicArray *arr = createArray(n);
    append(arr, 2);
    append(arr, 3);
    append(arr, 4);
    append(arr, 5);
    append(arr, 6);
    viewArray(arr);
    printf("%d", arr->capacity);
    return 0;
}