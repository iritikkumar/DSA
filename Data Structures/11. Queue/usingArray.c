#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Queue
{
    int capacity;
    int front;
    int rear;
    int *ptr;
};
struct Queue *createQueue(int size)
{
    struct Queue *Q = (struct Queue *)malloc(sizeof(struct Queue));
    Q->capacity = size;
    Q->front = -1;
    Q->rear = -1;
    Q->ptr = (int *)malloc(sizeof(int) * size);
    return Q;
}
void insert(struct Queue *Q, int data)
{
    if (((Q->rear + 1 == Q->capacity) && (Q->front == 0)) || (Q->rear + 1 == Q->front))
        printf("Queue is full: Overflow\n");
    else if (Q->rear == -1)
    {
        Q->front++;
        Q->rear++;
        Q->ptr[Q->rear] = data;
    }
    else if (Q->rear + 1 == Q->capacity)
    {
        Q->rear = 0;
        Q->ptr[Q->rear] = data;
    }
    else
    {
        Q->rear++;
        Q->ptr[Q->rear] = data;
    }
}
void delete (struct Queue *Q)
{
    if (Q->front == -1)
        printf("Queue is empty: Underflow");
    else if (Q->rear == Q->front)
    {
        Q->rear = -1;
        Q->front = -1;
    }
    else if (Q->front == Q->capacity - 1)
        Q->front = 0;
    else
        Q->front++; 
}
int main()
{
    int data;
    struct Queue *Q;
    Q = createQueue(5);
    return 0;
}