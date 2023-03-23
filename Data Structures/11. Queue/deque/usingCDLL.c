#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct deque{
    int item;
    struct deque *next, *prev;
};
void insertAtRear(struct deque **f, struct deque **r, int data){
    struct deque *n = (struct deque *)malloc(sizeof(struct deque));
    n->item = data;
    if(*r==NULL){
        *f = *r = n;
        n->next = n;
        n->prev = n; 
    }
    else{
        (*r)->next = n;
        n->prev = *r;
        n->next = *f;
        (*f)->prev = n;
        *r = n;
    }
}
int peekFront(struct deque *front){
    return front->item;
}
int peekRear(struct deque *rear){
    return rear->item;
}
void insertAtFront(struct deque **f, struct deque **r, int data){
    struct deque *n = (struct deque *)malloc(sizeof(struct deque));
    n->item = data;
    if(*f==NULL){
        *f = *r = n;
        n->next = n;
        n->prev = n;
    }
    else{
        (*f)->prev = n; 
        n->next = *f;
        n->prev = *r;
        (*r)->next = n;
        *f = n;
    }
}
void deletionAtRear(struct deque **f, struct deque **r){
    if(*f==NULL)
        printf("Empty Queue\n");
    else if(*f == *r){
        free(*f);
        *f = *r = NULL;
    }
    else{
        struct deque *temp = *r;
        (*r) = (*r)->prev;
        (*r)->next = temp->next;
        (*f)->prev = *r;
        free(temp);
    }
}
void deletionAtFront(struct deque **f, struct deque **r){
    if(*f == *r){
        free(*f);
        *f = *r = NULL;
    }
    else{
        struct deque *temp = *f;
        temp->next->prev = *r;
        (*r)->next = temp->next;
        *f = temp->next;
        free(temp);
    }
}
void viewList(struct deque *front, struct deque *rear)
{
    if (front == NULL)
        printf("Nothing to print. Empty list\n");
    else
    {
        // struct deque *t = front;
        // while (t != front->prev)
        // {
        //     printf("%d ", t->item);
        //     t = t->next;
        // }
        // printf("%d\n", t->item);
        // printf("%d %d\n", front->prev, rear);
        while(front != rear){
            printf("%d ",front->item);
            front=front->next;
        }
            printf("%d\n",front->item);        

    }
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
int main(){
    int x, y;
    struct deque *front=NULL;
    struct deque *rear=NULL;
    // printf("%d %d\n", front->prev, rear);
    insertAtFront(&front, &rear, 11);
    insertAtFront(&front, &rear, 13);
    insertAtFront(&front, &rear, 18);
    insertAtFront(&front, &rear, 20);
    insertAtRear(&front, &rear, 61);
    insertAtRear(&front, &rear, 48);
    // viewList(front, rear);
    // x=peekFront(front);
    // y=peekRear(rear);
    // printf("%d %d",x,y);
    while (1)
    {
        system("cls");
        viewList(front,rear);
        switch (menu())
        {
        case 1:
            printf("Enter the value you want to insert: ");
            scanf("%d", &x);
            insertAtFront(&front,&rear, x);
            break;
        case 2:
            printf("Enter the value you want to insert: ");
            scanf("%d", &x);
            insertAtRear(&front, &rear, x);
            break;
        case 3:
            deletionAtFront(&front, &rear);
            break;
        case 4:
            deletionAtRear(&front, &rear);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice...Retry...");
        }
    }
    return 0;
}