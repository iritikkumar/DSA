#include <stdio.h>
#include <stdlib.h>
  
struct ArrayADT
{
    int capacity;
    int lastindex;
    int *ptr;
};

struct ArrayADT *createArray(int x)
{
    struct ArrayADT *arr = malloc(sizeof(struct ArrayADT));
    arr->capacity = x;
    arr->lastindex = -1;
    arr->ptr = malloc(sizeof(int) * x);
    return arr;
}
void append(struct ArrayADT *arr, int value)
{
    if (arr->lastindex + 1 < arr->capacity)
    {
        arr->lastindex++;
        // *(arr->ptr + arr->lastindex) = value;
        arr->ptr[arr->lastindex] = value;
    }
    else
    {
        printf("Overflow\n");
    }
}
void insert(struct ArrayADT *arr, int index, int value)
{
    int i;
    if (index < 0 || index > arr->lastindex + 1)
        printf("Insertion Error: Invalid Index\n");
    else if (arr->lastindex == arr->capacity - 1)
        printf("Insertion Error: Overflow\n");
    else
    {
        for (i = arr->lastindex; i >= index; i--)
            arr->ptr[i + 1] = arr->ptr[i];
        arr->ptr[index] = value;
        arr->lastindex++;
    }
}
void delete (struct ArrayADT *arr, int index)
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
void viewArray(struct ArrayADT *arr)
{
    int i;
    for (i = 0; i <= arr->lastindex; i++)
    {
        printf("%d ", *(arr->ptr + i));
    }
    printf("\n");
}
void count(struct ArrayADT *arr)
{
    printf("The no of values in this array are %d\n", arr->lastindex + 1);
}
int isValidValue(struct ArrayADT *arr, int index)
{
    if (index >= 0 && index <= arr->lastindex)
        return 1;
    return 0;
}
int get(struct ArrayADT *arr, int index)
{
    if (isValidValue) 
        // return *(arr->ptr + index);
        return arr->ptr[index];
    else
        printf("Garbage Value\n");
}
void edit(struct ArrayADT *arr, int index, int newData)
{
    if(index<0||index>arr->lastindex)
        printf("Edit Error: Invalid Index\n");
    else{
        arr->ptr[index]=newData;    
    }
}
int search(struct ArrayADT *arr, int data)
{
    int i;
    for(i=0;i<=arr->lastindex;i++)
    {
        if(arr->ptr[i] == data)
            return i;
        return -1;
    }
}
int main()
{
    int n, test;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    struct ArrayADT *arr = createArray(n);
    append(arr, 20);
    append(arr, 30);
    append(arr, 40);
    append(arr, 50);
    append(arr, 60);
    viewArray(arr);
    // count(arr);
    // delete (arr, 5);
    // viewArray(arr);
    // count(arr);
    // test = get(arr,6);
    // test = isValidValue(arr,5);
    // printf("%d\n",test);

    return 0;
}