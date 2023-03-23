#include<stdio.h>
#include<stdlib.h>

struct dynamicArray
{
    int capacity;
    int lastindex;
    int *ptr;
};

struct dynamicArray* createArray(int cap)
{
    struct dynamicArray *arr = malloc(sizeof(struct dynamicArray));
    arr->capacity = cap;
    arr->lastindex = -1;
    arr->ptr = malloc(sizeof(int)*cap);
    return arr;
}
struct dynamicArray* DoubleArray(struct dynamicArray *arr)
{
    int i;
    struct dynamicArray *a = createArray(2*(arr->capacity));
    a->capacity = 2*arr->capacity;
    a->lastindex = arr->lastindex;
    a->ptr = malloc(sizeof(int)*2*arr->capacity);

    for(i=0;i<=arr->lastindex;i++)
    {
        a->ptr[i] = arr->ptr[i];
    }
    free(arr->ptr);
    free(arr);
    return a;

}
void DoubleArray(struct dynamicArray *arr)
{
    int i;
    int *p = malloc(sizeof(int)*2*arr->capacity);
    for(i=0;i<=arr->lastindex;i++)
    {
        p[i] = arr->ptr[i];
    }
    free(arr->ptr);
    arr->ptr = p;

}
struct dynamicArray* append(struct dynamicArray *arr, int data)
{
    if(arr->lastindex+1==arr->capacity)
    {
        printf("Creating double array\n");
        arr = DoubleArray(arr);
    }
    arr->lastindex++;
    arr->ptr[arr->lastindex] = data;
    return arr;
}
void viewArray(struct dynamicArray *arr)
{
    for(int i=0;i<=arr->lastindex;i++)
    {
        printf("%d ",arr->ptr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    struct dynamicArray *arr = createArray(n);   
    arr = append(arr,2); 
    arr = append(arr,3); 
    arr = append(arr,4); 
    arr = append(arr,5); 
    arr = append(arr,6); 
    viewArray(arr);
    printf("%d",arr->capacity);
    return 0;
}