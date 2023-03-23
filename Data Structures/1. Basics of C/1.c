#include <stdio.h>
#include <conio.h>
int maxValue(int[], int);
int main()
{
    int n, m;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    m = maxValue(a, n);
    printf("%d", m);
    getch();
    return 0;
}
int maxValue(int b[], int x)
{
    int t = b[0];
    for (int i = 1; i < x; i++)
    {
        if (t < b[i])
        {
            t = b[i];
        }
    }
    return t;
}