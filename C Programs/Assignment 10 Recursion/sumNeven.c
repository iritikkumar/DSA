#include<stdio.h>
#include<conio.h>
int sumNeven(int);
int main()
{
    int x,c;
    printf("Enter the value of n:");
    scanf("%d",&x);
    c=sumNeven(x);
    printf("%d",c);
    getch();
}
int sumNeven(int n)
{
    int k;
    if(n==1)
     return 2;
    k=2*n+sumNeven(n-1);
    return k;
}
