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
int delete (struct heap *h)
{
    if (h->lastIndex != -1)
    {
        int left = 1, right = 2, index = 0;
        int N = h->lastIndex + 1;
        int item = h->ptr[0];
        int last = h->ptr[N - 1];
        N--;
        h->lastIndex--;
        while (right < N)
        {
            if (last > h->ptr[left] && last > h->ptr[right])
            {
                h->ptr[index] = last;
                break;
            }
            else
            {
                if (h->ptr[left] > h->ptr[right])
                {
                    h->ptr[index] = h->ptr[left];
                    index = left;
                }
                else
                {
                    h->ptr[index] = h->ptr[right];
                    index = right;
                }
            }
            left = index * 2 + 1;
            right = index * 2 + 2;
        }
        if (left == N - 1 && last < h->ptr[left])
        {
            h->ptr[index] = h->ptr[left];
            h->ptr[left] = last;
        }
        else
        {
            h->ptr[index] = last;
        }
        // h->ptr[N] = item;
        return item;
    }
}
void view(struct heap *h)
{
    for (int i = 0; i <= h->lastIndex; i++)
        printf("%d ", h->ptr[i]);
    printf("\n");
}
int menu()
{
    int ch;
    printf("1. Insert\n2. Delete\n3. Exit\nYour Choice: ");
    scanf("%d", &ch);
    return ch;
}
int main()
{
    int a[] = {20, 100, 56, 180, 140, 70, 96, 35, 120};
    struct heap *h;
    h = createHeap(9);
    for (int i = 0; i < 9; i++)
        insert(h, a[i]);
    for (int i = 0; i < 9; i++)
        a[9 - i - 1] = delete (h);
    for (int i = 0; i < 9; i++)
        printf("%d ", a[i]);
    // view(h);
    return 0;
}