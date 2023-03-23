#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Deque{
    int capacity;
    int front, rear;
    int *ptr;
};
struct Deque* createDeque(int size){
    struct Deque *n = (struct Deque*)malloc(sizeof(struct Deque));
    n->capacity = size;
    n->front = n->rear = -1;
    n->ptr = (int*)malloc(sizeof(int)*size);
    return n;
}
void insertAtFront(struct Deque *D, int data){
    if(((D->rear+1==D->capacity)&&(D->front==0)) || (D->rear+1 ==D->front))
        printf("Overflow: Deque is full\n");
    else if(D->front == -1){
        D->front++;
        D->rear++;
        D->ptr[D->front] = data;
    }
    else if(D->front==0){
        D->front = D->capacity-1;
        D->ptr[D->front] = data;
    }
    else{
        D->front--;
        D->ptr[D->front] = data;
    }
}
void insertAtRear(struct Deque *D, int data){
    if(((D->rear + 1 == D->capacity) && (D->front == 0))||(D->rear + 1 == D->front))
        printf("Overflow: Deque is full\n");
    else if (D->rear == -1){
        D->front++;
        D->rear++;
        D->ptr[D->rear] = data;
    }
    else if (D->rear + 1 == D->capacity){
        D->rear = 0;
        D->ptr[D->rear] = data;
    }
    else{
        D->rear++;
        D->ptr[D->rear] = data;
    }
} 
void deletionAtFront(struct Deque *D){
    if (D->front == -1)
        printf("Deque is empty: Underflow");
    else if (D->rear == D->front)
    {
        D->rear = -1;
        D->front = -1;
    }
    else if (D->front == D->capacity - 1)
        D->front = 0;
    else
        D->front++;
}
void deletionAtRear(struct Deque *D){
    if (D->rear == -1)
        printf("Deque is empty: Underflow");
    else if (D->rear == D->front)
    {
        D->rear = -1;
        D->front = -1;
    }
    else if(D->rear == 0){
        D->rear = D->capacity - 1;
    }
    else
        D->rear--;
}
int menu()
{
    int choice;
    printf("1. Insert First\n");
    printf("2. Insert Rear\n");
    printf("3. Delete First\n");
    printf("4. Delete Rear \n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}
void viewList(struct Deque *D){                 // Incorrect method...just for checking
    for(int i=0;i<D->capacity;i++){
        printf("%d ",D->ptr[i]);
    }
    printf("\n");
}
int main(){
    struct Deque *D;
    D = createDeque(10);
    int x, y;
    insertAtFront(D, 11);
    insertAtFront(D, 13);
    insertAtFront(D, 18);
    insertAtFront(D, 20);
    insertAtRear(D, 61);
    insertAtRear(D, 48);
    // viewList(D);
    while (1)
    {
        system("cls");
        viewList(D);
        switch (menu())
        {
        case 1:
            printf("Enter the value you want to insert: ");
            scanf("%d", &x);
            insertAtFront(D, x);
            break;
        case 2:
            printf("Enter the value you want to insert: ");
            scanf("%d", &x);
            insertAtRear(D, x);
            break;
        case 3:
            deletionAtFront(D);
            break;
        case 4:
            deletionAtRear(D);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice...Retry...");
        }
    }
    return 0;
}