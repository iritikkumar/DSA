#include<stdio.h>
#include<conio.h>
int Armstrong(int);
int main()
{
    int x,k;
    printf("Enter the number:");
    scanf("%d",&x);
    k=Armstrong(x);
    if(k==x)
        printf("Armstrong");
    else
        printf("Not Armstrong");


    getch();

}
int Armstrong(int n)
{
    int a,b,i,j,s=0;
    a=n;
    b=n;
    for(i=0;a;i++)
    {
        a=a/10;
    }
    j=i;
    for(j;j>0;j--)
    {
        s=s+pow(b%10,i);
        b=b/10;
    }
    return s;

}
