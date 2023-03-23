#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main()
{
    int x,k;
    printf("Enter the value of N:");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        k=fibonacci(i);
        printf("%d\n",k);
    }

    getch();

}
int fibonacci(int n)
{
    int s=0;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    s=fibonacci(n-2)+fibonacci(n-1);
    return s;
}
