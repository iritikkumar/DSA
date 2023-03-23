#include<stdio.h>
#include<conio.h>
int printNrev(int);
int main()
{
    int x;
    printf("Enter the value of n:");
    scanf("%d",&x);
    printNrev(x);
    getch();
}
int printNrev(int n)
{
    if(n>=1)
    {
        printf("%d\n",n);
        printNrev(n-1);

    }
}
