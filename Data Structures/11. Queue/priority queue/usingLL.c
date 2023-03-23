#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct pq{
    int item, pno;
    struct pq *next;
};
void insert(struct pq **s, int pno, int data){
    struct pq *n = (struct pq *)malloc(sizeof(struct pq));
    n->item = data;
    n->pno = pno;
    if(*s==NULL){
        n->next = NULL;
        *s = n;
        // printf("\nHello\n");
    }
    else {
        struct pq *t1 = *s, *t2 = NULL;
        while(t1->pno >= pno){
            if(t1->next==NULL)
                break;
            t2 = t1;
            t1 = t1->next;
        }
        if(t2 == NULL){
            if(t1->pno >= pno){
                n->next = t1->next;
                t1->next = n;
                // printf("\nram\n");
            }
            else{
                n->next = t1;
                (*s) = n;
                // printf("\nkrishna\n");
            }
        }
        else if(t1->next == NULL && t1->pno >= pno){
            t1->next = n;
            n->next = NULL;
            // printf("\nshiv\n");
        }
        else{
            // printf("\n%d %d\n",t2->next,t1);
            n->next = t1;            
            t2->next = n;
            // printf("\nvishnu\n");
            
        }

    }
}
void delete(struct pq **s){
    if (*s == NULL)
        printf("\nEmpty List");
    else
    {
        struct pq *temp = *s;
        *s = temp->next;
        free(temp);
    }
}
void viewList(struct pq *start)
{
    struct pq *temp = start;
    while (temp != NULL)
    {
        printf("%d ", temp->item);
        temp = temp->next;
    }
    printf("\n");
}
int menu()
{
    int choice;
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}
int main(){
    int x,y;
    struct pq *start=NULL;
    // insert(&start,0,9);
    // insert(&start,2,12);
    // insert(&start,0,10);
    // insert(&start,1,11);
    // viewList(start);
    while (1)
    {
        system("cls");
        viewList(start);
        switch (menu())
        {
        case 1:
            printf("Enter the value you want to insert: ");
            scanf("%d", &y);
            printf("Enter the priority: ");
            scanf("%d", &x);
            insert(&start, x, y);
            break;
        case 2:
            delete(&start);
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid Choice...Retry...");
        }
    }
    return 0;
}