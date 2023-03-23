#include<stdio.h>
#include<conio.h>
int sumNodd(int);
int main()
{
    int x,c;
    printf("Enter the value of n:");
    scanf("%d",&x);
    c=sumNodd(x);
    printf("%d",c);
    getch();
}
int sumNodd(int n)
{
    int k;
    if(n==1)
     return 1;
    k=2*n-1+sumNodd(n-1);
    return k;
}
