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
void doubleQueue(struct Queue *Q)
{
    int *p = (int *)malloc(sizeof(int) * 2 * Q->capacity);
    for (int i = 0; i <= Q->rear; i++)
        p[i] = Q->ptr[i];
    Q->capacity *= 2;
    free(Q->ptr);
    Q->ptr = p;
}
void halfQueue(struct Queue *Q)
{
    int *p = (int *)malloc(sizeof(int) * Q->capacity / 2);
    for (int i = 0; i <= Q->rear; i++)
        p[i] = Q->ptr[i];
    Q->capacity /= 2;
    free(Q->ptr);
    Q->ptr = p;
}
void push(struct Queue *Q, int data)
{
    if (Q->rear + 1 == Q->capacity)
        doubleQueue(Q);
    Q->rear += 1;
    Q->ptr[Q->rear] = data;
}
void pop(struct Queue *Q)
{
    if (Q->rear == -1)
        printf("Queue is empty");
    else
    {
        int i;
        for (i = 0; i < Q->rear; i++)
            Q->ptr[i] = Q->ptr[i + 1];
        Q->rear -= 1;
        if (Q->capacity/2 == Q->rear + 1 && Q->rear >= 0)
            halfQueue(Q);
    }
}
int main()
{
    int data;
    struct Queue *Q;
    Q = createQueue(5);
    return 0;
}