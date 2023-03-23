#include<stdio.h>
#include<stdlib.h>  
#include<conio.h>
struct PrQueue{
    int prange, capacity;
    int *front, *rear;
    int **ptr;
};
struct PrQueue* createPrQueue(int prange, int cap){
    struct PrQueue *pq;
    pq =  (struct PrQueue *)malloc(sizeof(struct PrQueue));
    pq->prange = prange;
    pq->capacity = cap;
    pq->front = (int*)malloc(sizeof(int)*prange);
    pq->rear = (int*)malloc(sizeof(int)*prange);
    pq->ptr = (int **)malloc(sizeof(int*)*prange);
    for(int i=0;i<prange;i++){
        pq->ptr[i] = (int *)malloc(sizeof(int)*cap);
        pq->front[i] = pq->rear[i] = -1;
    }
    return pq;
}
void insert(struct PrQueue *pq, int pno, int data){
    if(((pq->rear[pno]+1 == pq->capacity)&& (pq->front[pno]==0) || (pq->rear[pno]+1==pq->front[pno])))
        printf("Queue Overflow\n");
    else if(pq->front[pno] == -1){
        pq->front[pno]++;
        pq->rear[pno]++;
        pq->ptr[pno][pq->rear[pno]] = data;
    }
    else if(pq->rear[pno]+1 == pq->capacity){
        pq->rear[pno] = 0;
        pq->ptr[pno][pq->rear[pno]] = data;
    }
    else{
        pq->rear[pno]++;
        pq->ptr[pno][pq->rear[pno]] = data;
    }
}
void delete(struct PrQueue *pq){
    int temp_pno = 0;
    for(int i=0;i<pq->prange;i++){
        if(pq->front[temp_pno]>=0)
            break;
        temp_pno++;        
    }
    if(temp_pno == pq->prange)
        printf("Queue is empty: Underflow\n");
    else if(pq->front[temp_pno] == pq->rear[temp_pno]){
        pq->front[temp_pno] = -1;
        pq->rear[temp_pno] = -1;
    }
    else if(pq->front[temp_pno] == pq->capacity - 1)
        pq->front[temp_pno] = 0;
    else
        pq->front[temp_pno]++;

}
void view(struct PrQueue *pq){
    int temp_pno = 0;
    for(int i=0;i<pq->prange;i++){
        if(pq->front[temp_pno]>=0)
            break;
        temp_pno++;        
    }
    if(temp_pno == pq->prange)
        printf("Empty Queue\n");
    else{
        int i,j;
        for(i=0;i<pq->prange;i++){
            if(pq->front[i]!=-1){
                for(j=pq->front[i];j<=pq->rear[i];j++){
                    printf("%d ",pq->ptr[i][j]);
                }
                printf("\n");
            }
            else    
                printf("\n");
        }
    }
}
int main(){                                            // In my program, higher priority means low priority number
    struct PrQueue* pq = NULL;                         // eg. 0 means maximum priority
    pq = createPrQueue(3,4);
    insert(pq,0,1);
    insert(pq,0,2);
    insert(pq,0,3);
    insert(pq,1,4);
    insert(pq,1,5);
    insert(pq,1,6);
    insert(pq,2,7);
    insert(pq,2,8);
    insert(pq,2,9);
    insert(pq,2,11);
    insert(pq,0,101);
    insert(pq,1,1001);
    // delete(pq);
    // delete(pq);
    // delete(pq);
    // delete(pq);
    // delete(pq);
    // delete(pq);
    // delete(pq);
    // delete(pq);
    // delete(pq);
    // printf("%d %d",pq->front[2],pq->rear[0]);
    view(pq);
    return 0;
}

