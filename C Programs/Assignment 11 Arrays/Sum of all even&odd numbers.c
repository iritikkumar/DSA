#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,r=0,s=0;
    printf("Enter 10 numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        r=r+a[i];
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==1)
        s=s+a[i];
    }
    printf("Sum of all even numbers is %d.\nSum of all odd numbers is %d.",r,s);
    getch();
}
