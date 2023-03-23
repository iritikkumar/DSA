#include<stdio.h>
#include<stdlib.h>

struct DynamicArray {
    int capacity;
    int lastindex;
    int *ptr;
};
struct DynamicArray* createArray(int size){
    struct DynamicArray *arr =  (struct DynamicArray*)malloc(sizeof(struct DynamicArray)*size);
    arr->capacity = size;
    arr->lastindex = -1;
    arr->ptr = malloc(sizeof(int)*size);
    return arr;
}
void doubleArray(struct DynamicArray *arr){
    arr->capacity *=2;
    int *k = (int *)malloc(sizeof(int)*arr->capacity);
    for(int i = 0;i<=arr->lastindex;i++)
        k[i] = arr->ptr[i];
    free(arr->ptr);
    arr->ptr = k;
}
void halfArray(struct DynamicArray *arr){
    arr->capacity /= 2;
    int *k = (int *)malloc(sizeof(int)*arr->capacity);
    for(int i = 0;i<=arr->lastindex;i++)
        k[i] = arr->ptr[i];
    free(arr->ptr);
    arr->ptr = k;
}
void appendItem(struct DynamicArray *arr, int data){
    if(arr->lastindex+1 == arr->capacity)
        doubleArray(arr);
    arr->lastindex += 1;
    arr->ptr[arr->lastindex]  = data;
}
void insert(struct DynamicArray *arr, int index, int data){
    int i;
    if(index<0 || index > arr->lastindex+1)
        printf("Insertion Error: Invalid Index\n");
    else{ 
        if(arr->lastindex+1 == arr->capacity)
            doubleArray(arr);
        for(i=arr->lastindex; i>= index; i--)
            arr->ptr[i+1] = arr->ptr[i];
        arr->ptr[index] = data;
        arr->lastindex++;
    }
}
void delete(struct DynamicArray *arr, int index)
{
    int i;
    if(index<0 || index > arr->lastindex)
        printf("Deletion Error: Underflow\n");
    for(i = index; i<arr->lastindex;i++)
        arr->ptr[i] = arr->ptr[i+1];
    arr->lastindex--;
    if(arr->capacity/2 == arr->lastindex + 1)
        halfArray(arr);
}
int count(struct DynamicArray *arr){
    // printf("The no of elements entered in given array are %d\n",arr->lastindex+1);
    return arr->lastindex + 1;
}
void viewArray(struct DynamicArray *arr){
    for(int i=0; i <= arr->lastindex; i++){
        printf("%d ",arr->ptr[i]);
    }
    printf("\n");
}
int isValidValue(struct DynamicArray *arr, int index){
    if(index>=0 && index <= arr->lastindex)
        return 1;
    else
        return 0; 
} 
int getItem(struct DynamicArray *arr, int index){
    if(index<0 || index > arr->lastindex+1)
        printf("Get item error: Invalid Index\n");
    else if(isValidValue(arr,index)){
        return arr->ptr[index];
    }
}
void edit(struct DynamicArray *arr, int index, int newVal){
    if(index>=0 && index<=arr->lastindex)
        arr->ptr[index]  = newVal;
    else
        printf("Edit Error: Invalid Index\n");
}
int search(struct DynamicArray *arr, int data){
    for(int i=0;i<=arr->lastindex;i++){
        if(arr->ptr[i] == data)
            return i;
    return -1;
    }
}
int menu(){
    int choice;
    printf("\n1.Append");
    printf("\n2.Insert ");
    printf("\n3.Delete ");
    printf("\n4.Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    return choice;
}
int main(){
    int x,index;
    struct DynamicArray *arr;
    arr = createArray(5);
    viewArray(arr);
    while(1)
    {
        system("cls");
        printf("\nArray Capacity: %d",arr->capacity);
        printf("\nCount Data: %d\n",count(arr));  
        viewArray(arr);      
        switch (menu())
        {
        case 1: 
            printf("Enter the value you want to append: ");
            scanf("%d",&x);
            appendItem(arr,x);
            break;
        case 2:
            printf("Enter the value you want to insert: ");
            scanf("%d",&x);
            printf("Enter the index you want to insert: ");
            scanf("%d",&index);
            insert(arr,index,x);
            break;
        case 3:
            printf("Enter the index at which you want to delete data: ");
            scanf("%d",&index);
            delete(arr,index);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice...Retry...");
            break;
        }
    }
        return 0;
}