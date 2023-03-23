#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    factorial(n);
    getch();
}
int factorial(int a)
{
    int i;
    double s=1;
    for(i=1;i<=a;i++)
    {
        s=s*i;
    }
    printf("%lf",s);
    return 0;
}
