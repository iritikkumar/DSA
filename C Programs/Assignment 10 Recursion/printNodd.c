#include<stdio.h>
#include<conio.h>
int printNodd(int);
int main()
{
    int x;
    printf("Enter the value of n:");
    scanf("%d",&x);
    printNodd(x);
    getch();
}
int printNodd(int n)
{
    if(n>=1)
    {
        printNodd(n-1);
        printf("%d\n",2*n-1);
    }
}
