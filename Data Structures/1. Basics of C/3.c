#include <stdio.h>
#include <conio.h>
int sum(int[], int);
int main()
{
    int n,m;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    m = sum(a, n);
    printf("%d", m);
    getch();
    return 0;
}
int sum(int b[], int x)
{
    int s=0;
    for (int i = 0; i < x; i++)
    {
        s=s+b[i];
    }
    return s;
}