#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
int quick(int *a, int left, int right)
{
    int loc = left;
    while (left < right)
    {
        while (left < right && a[loc] <= a[right])
            right--;
        if (left == right)
            break;
        else
        {
            swap(&a[loc], &a[right]);
            loc = right;
        }
        while (left < right && a[left] <= a[loc])
            left++;
        if (left == right)
            break;
        else
        {
            swap(&a[loc], &a[left]);
            loc = left;
        }
    }
    return loc;
}
void quicksort(int *a, int l, int u)
{
    int loc = quick(a, l, u);
    if(l+1<loc)
        quicksort(a, l, loc - 1);
    if(loc+1<u)
        quicksort(a, loc + 1, u);
}
int main()
{
    int i, size;
    scanf("%d", &size);
    int *a = (int *)malloc(sizeof(int) * size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, size - 1);
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}