#include<stdio.h>
#include<conio.h>
int sum_digits(int);
int main()
{
    int a,k;
    printf("Enter the number:");
    scanf("%d",&a);
    k=sum_digits(a);
    printf("Sum of digits of given number is %d.",k);
    getch();
}
int sum_digits(int n)
{
    int s=0,x;
    if(n==0)
        return 0;
    x=n;
    s=s+x%10+sum_digits(x/10);
    return s;
}
