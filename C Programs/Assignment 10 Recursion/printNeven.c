#include<stdio.h>
#include<conio.h>
int printNeven(int);
int main()
{
    int x;
    printf("Enter the value of n:");
    scanf("%d",&x);
    printNeven(x);
    getch();
}
int printNeven(int n)
{
    if(n>=1)
    {
        printNeven(n-1);
        printf("%d\n",2*n);
    }

}
