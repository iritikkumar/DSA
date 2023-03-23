#include<stdio.h>
#include<stdio.h>
void reverse(int [], int);
int main()
{
    int x;
    printf("Enter the size of array:");
    scanf("%d",&x);
    int a[x],i;
    printf("Enter %d numbers:\n",x);
    for(i=0;i<=x-1;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,x);
    getch();
    return 0;
}
void reverse(int b[], int n)
{
    int i,c,d;
    if(n%2==0)
    {
        for(i=0;i<=(n-2)/2;i++)
        {
            c=b[i]+b[n-i-1];
            b[i]=c-b[i];
            b[n-i-1]=c-b[i];
        }

    }
    else
    {
        for(i=0;i<(n-1)/2;i++)
        {
            c=b[i]+b[n-i-1];
            b[i]=c-b[i];
            b[n-i-1]=c-b[i];
        }
    }

    for(i=0;i<=n-1;i++)
        printf("%d ",b[i]);
}
