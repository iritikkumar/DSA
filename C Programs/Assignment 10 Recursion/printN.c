#include<stdio.h>
#include<conio.h>
int printN(int);
int main()
{
    int x;
    printf("Enter the value of n:");
    scanf("%d",&x);
    printN(x);
    getch();
}
int printN(int n)
{
    if(n>=1)
    {
        printN(n-1);
        printf("%d\n",n);
    }
}
