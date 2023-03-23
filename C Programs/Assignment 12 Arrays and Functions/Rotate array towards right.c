#include<stdio.h>
#include<stdio.h>
void rotate(int [], int);
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
    rotate(a,x);
    getch();
    return 0;
}
void rotate(int b[], int n)
{
    int i,c,d;
    c=b[0]+b[n-1];
    b[0]=c-b[0];
    b[n-1]=c-b[0];
    for(i=n-1;i>1;i--)
    {
        d=0;
        d=b[i-1]+b[i];
        b[i-1]=d-b[i-1];
        b[i]=d-b[i-1];
    }
    for(i=0;i<=n-1;i++)
        printf("%d ",b[i]);
}
