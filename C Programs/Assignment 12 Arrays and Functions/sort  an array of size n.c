#include<stdio.h>
#include<conio.h>
void bubble_sort(int [], int);
int main()
{
    int x;
    printf("Enter the size of array:");
    scanf("%d",&x);
    int a[10],i;
    printf("Enter %d numbers:\n",x);
    for(i=0;i<=x-1;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,x);
    for(i=0;i<=x-1;i++)
    {
        printf("%d ",a[i]);
    }


    getch();
}
void bubble_sort(int A[], int n)
{
    int i,j;
    for(j=1;j<=n-1;j++)
    {
        for(i=0;i<=n-1-j;i++)
    {
        if(A[i]>A[i+1])
        {
            A[i]=A[i]+A[i+1];
            A[i+1]=A[i]-A[i+1];
            A[i]=A[i]-A[i+1];
        }
    }

    }
}

