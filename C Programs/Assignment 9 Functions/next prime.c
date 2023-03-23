#include<stdio.h>
#include<conio.h>
int nextprime(int);
int main()
{
    int x,k;
    printf("Enter the number:");
    scanf("%d",&x);
    k=nextprime(x);
    printf("%d",k);
    getch();
}
int nextprime(int n)
{
    int a,i;
    for(a=n+1;1;a++)
    {
        for(i=2;1;i++)
    {
        if(a%i==0)
            break;
    }
        if(a==i)
            break;
    }

    return a;
}
