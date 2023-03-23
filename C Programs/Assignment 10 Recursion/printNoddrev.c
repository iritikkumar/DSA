#include<stdio.h>
#include<conio.h>
int printNoddrev(int);
int main()
{
    int x;
    printf("Enter the value of n:");
    scanf("%d",&x);
    printNoddrev(x);
    getch();
}
int printNoddrev(int n)
{
    if(n>=1)
    {
        printf("%d\n",2*n-1);
        printNoddrev(n-1);

    }
}
