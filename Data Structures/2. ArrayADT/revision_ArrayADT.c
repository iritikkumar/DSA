#include<stdio.h>
#include<stdlib.h>

struct ArrayADT {
    int capacity;
    int lastindex;
    int *ptr;
};
struct ArrayADT* createArray(int size){
    struct ArrayADT *arr =  (struct ArrayADT*)malloc(sizeof(struct ArrayADT)*size);
    arr->capacity = size;
    arr->lastindex = -1;
    arr->ptr = malloc(sizeof(int)*size);
    return arr;
}
void appendItem(struct ArrayADT *arr, int data){
    if(arr->lastindex+1 == arr->capacity)
        printf("Append Error: Overflow\n");
    else{
        arr->lastindex += 1;
        arr->ptr[arr->lastindex]  = data;
    }
}
void insert(struct ArrayADT *arr, int index, int data){
    int i;
    if(index<0 || index > arr->lastindex+1)
        printf("Insertion Error: Invalid Index\n");
    else if(arr->lastindex+1 == arr->capacity)
        printf("Insertion Error: Overflow\n");
    else{
        for(i=arr->lastindex; i>= index; i--)
            arr->ptr[i+1] = arr->ptr[i];
        arr->ptr[index] = data;
        arr->lastindex++;
    }
}
void delete(struct ArrayADT *arr, int index)
{
    int i;
    if(index<0 || index > arr->lastindex)
        printf("Deletion Error: Underflow\n");
    for(i = index; i<arr->lastindex;i++)
        arr->ptr[i] = arr->ptr[i+1];
    arr->lastindex--;
}
void count(struct ArrayADT *arr){
    printf("The no of elements entered in given array are %d\n",arr->lastindex+1);
}
void viewArray(struct ArrayADT *arr){
    for(int i=0; i <= arr->lastindex; i++){
        printf("%d ",arr->ptr[i]);
    }
    printf("\n");
}
int isValidValue(struct ArrayADT *arr, int index){
    if(index>=0 && index <= arr->lastindex)
        return 1;
    else
        return 0; 
} 
int getItem(struct ArrayADT *arr, int index){
    if(index<0 || index > arr->lastindex+1)
        printf("Get item error: Invalid Index\n");
    else if(isValidValue(arr,index)){
        return arr->ptr[index];
    }
}
void edit(struct ArrayADT *arr, int index, int newVal){
    if(index>=0 && index<=arr->lastindex)
        arr->ptr[index]  = newVal;
    else
        printf("Edit Error: Invalid Index\n");
}
int search(struct ArrayADT *arr, int data){
    for(int i=0;i<=arr->lastindex;i++){
        if(arr->ptr[i] == data)
            return i;
    return -1;
    }
}
int main(){
    struct ArrayADT *arr;
    arr = createArray(10);
    appendItem(arr,5);
    appendItem(arr,10);
    appendItem(arr,15);
    appendItem(arr,55);
    appendItem(arr,58);
    appendItem(arr,95);
    insert(arr, 3, 988);
    // int k = getItem(arr,15);
    // printf("%d\n",k);
    // delete(arr,4);
    edit(arr,3,9874);
    viewArray(arr);
    return 0;
}