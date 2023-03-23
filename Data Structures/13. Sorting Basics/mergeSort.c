#include <stdio.h>
#include <stdlib.h>

void merge(int *a, int l, int m, int u)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = u - m;
    int n = n1 + n2;
    int *left = (int *)malloc(sizeof(int) * n1);
    int *right = (int *)malloc(sizeof(int) * n2);

    for (i = 0; i < n1; i++)
        left[i] = a[l + i];

    for (j = 0; j < n2; j++)
        right[j] = a[m + 1 + j];

    for (i = 0, j = 0, k = l; i<n1&&j<n2; k++)
    {
        // if (i == n1 || j == n2)
        //     break;
        // else 
        if (left[i] < right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
    }
    // for (; k < n; k++)
    // {
    //     if (i == n1)
    //     {
    //         a[k] = right[j];
    //         j++;
    //     }
    //     else
    //     {
    //         a[k] = left[i];
    //         i++;
    //     }
    // }
    while(i<n1){
        a[k] = left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k] = right[j];
        j++;
        k++;
    }
    
}

void mergesort(int *a, int l, int u)
{
    if (l < u)
    {
        int m = (l + u) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, u);
        merge(a,l,m,u);
    }
}
int main()
{
    int i, size;
    scanf("%d", &size);
    // int a[size];
    int *a = (int *)malloc(sizeof(int) * size);
    // int b[] = {2, 7, 9, 11, 15, 19, 21, 23};
    // int a[] = {1, 3, 10, 13, 17};
    // int *c;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    mergesort(a,0,size-1);
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}