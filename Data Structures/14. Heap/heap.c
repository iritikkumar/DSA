#include <stdio.h>
#include <stdlib.h>

struct heap
{
    int *ptr;
    int lastIndex;
};
struct heap *createHeap(int size)
{
    struct heap *h = (struct heap *)malloc(sizeof(struct heap));
    h->ptr = (int *)malloc(sizeof(int) * size);
    h->lastIndex = -1;
    return h;
}
void insert(struct heap *h, int data)
{
    int index, parIndex;
    index = ++(h->lastIndex);
    while (index != 0)
    {
        parIndex = (index - 1) / 2;
        if (h->ptr[parIndex] < data)
            h->ptr[index] = h->ptr[parIndex];
        else
            break;
        index = parIndex;
    }
    h->ptr[index] = data;
}
void delete(struct heap *h){
    if(h->lastIndex==-1)
        return;
    int left=1, right=2, index = 0;
    int N = h->lastIndex + 1;
    int item  = h->ptr[0];
    int last =  h->ptr[N-1];
    N--;
    h->lastIndex--;
    while(right < N){
        if(last > h->ptr[left] && last > h->ptr[right]){
            h->ptr[index] = last;
            break;
        }
        else{
            if(h->ptr[left] > h->ptr[right]){
                h->ptr[index] = h->ptr[left];
                index = left;
            }
            else{
                h->ptr[index] = h->ptr[right];
                index = right;
            }
        }
        left = index * 2 + 1;
        right = index * 2 + 2;
    }
    if(left == N-1 && last < h->ptr[left]){
        h->ptr[index] = h->ptr[left];
        h->ptr[left] = last;
    }
    else{
            h->ptr[index] = last;
    }
    h->ptr[N] = item;  

}
void view(struct heap *h){
    for (int i = 0; i <= h->lastIndex; i++)
        printf("%d ", h->ptr[i]);
    printf("\n");
}
int menu(){
    int ch;
    printf("1. Insert\n2. Delete\n3. Exit\nYour Choice: ");
    scanf("%d",&ch);
    return ch;
}
int main()
{
    int x;
    struct heap *h;
    h = createHeap(30);
    insert(h, 50);
    insert(h, 20);
    insert(h, 40);
    insert(h, 10);
    insert(h, 5);
    insert(h, 30);
    insert(h, 25);
    insert(h, 8);
    insert(h, 6);
    // insert(h, 2);
    // insert(h, 1);
    // insert(h, 15);
    // insert(h, 29);
    // insert(h, 14);
    // insert(h, 24);
    delete(h);
    // while(1){
    //     system("cls");
    //     view(h);
    //     switch (menu())
    //     {
    //     case 1:
    //         scanf("%d",&x);
    //         insert(h,x);
    //         break;
    //     case 2:
    //         delete(h);
    //         break;
    //     case 3:
    //         exit(0);
    //     default:
    //         printf("Invalid Choice...Retry...");
    //         break;
    //     }
    // }
    view(h);
    return 0;
}