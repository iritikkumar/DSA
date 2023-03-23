#include<stdio.h>
#include<conio.h>
int index_smallest(int [], int);
int main()
{
    int x;
    printf("Enter the size of array:");
    scanf("%d",&x);
    int a[x],i,k;
    printf("Enter 10 numbers:\n");
    for(i=0;i<=x-1;i++)
    {
        scanf("%d",&a[i]);
    }
    k=index_smallest(a,x);
    printf("The index of smallest value is %d",k);
    getch();
}
int index_smallest(int b[], int n)
{
    int c,i;
    c=b[0];
    for(i=1;i<=n-1;i++)
        if(c>b[i])
            c=b[i];
    for(i=0;i<=n-1;i++)
    {
        if(c==b[i])
            return i;
    }
}
