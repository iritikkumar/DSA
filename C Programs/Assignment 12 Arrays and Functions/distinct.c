#include<stdio.h>
#include<stdio.h>
void distinct(int [], int);
int main()
{
    int x,i;
    printf("Enter the size of array:");
    scanf("%d",&x);
    int a[x];
    printf("Enter %d numbers:\n",x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    distinct(a,x);
    getch();
    return 0;
}
void distinct(int a[], int n)
{
    int i,j;

    // Pick all elements one by one
    for (i=0; i<n; i++)
    {
    // Check if the picked element is already printed
    for (j=0; j<i; j++)
    {
    if (a[i] == a[j])
    break;
    }
    // If not printed earlier, then print it
    if (i==j)
    printf("%d ", a[i]);
    }
    /*
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]==a[j])
            break;
        }

        if (j==n-1)
        printf("%d ", a[i]);
    }*/

}
