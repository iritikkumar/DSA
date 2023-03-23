#include<stdio.h>
#include<conio.h>
int printNevenrev(int);
int main()
{
    int x;
    printf("Enter the value of n:");
    scanf("%d",&x);
    printNevenrev(x);
    getch();
}
int printNevenrev(int n)
{
    if(n>=1)
    {
        printf("%d\n",2*n);
        printNevenrev(n-1);
    }

}
