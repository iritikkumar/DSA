#include <stdio.h>
#include <conio.h>
float avg(int[], int);
int main()
{
    int n;
    float m;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    m = avg(a, n);
    printf("%0.2f", m);
    getch();
    return 0;
}
float avg(int b[], int x)
{
    int s=0;
    float a;
    for (int i = 0; i < x; i++)
    {
        s=s+b[i];
    }
    a=(float)s/x;
    return a;
}