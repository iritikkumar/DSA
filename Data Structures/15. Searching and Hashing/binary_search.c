#include <stdio.h>
#include <stdlib.h>

int binary_search(int a[], int l, int u, int data)
{
    int m = (l + u) / 2;
    int index;
    while (l <= u)
    {
        if (data == a[m])
            return m;
        else if (data < a[m])
        {
            index = binary_search(a, l, m, data);
            return index;
        }
        else
        {
            index = binary_search(a, m + 1, u, data);
            return index;
        }
    }
    return -1;
}
int main()
{
    // int a[] = {2, 4, 6, 8, 10, 12, 15, 78, 96, 115, 178, 250, 300};
    int a[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
    int index = binary_search(a, 0, 8, 5);
    printf("%d", index);
    return 0;
}