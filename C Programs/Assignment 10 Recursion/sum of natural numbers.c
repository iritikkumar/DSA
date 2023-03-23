#include<stdio.h>
#include<conio.h>
int f1(int);
int main()
{
    int x,k;
    printf("Enter the value of n:");
    scanf("%d",&x);
    k=f1(x);
    printf("%d",k);
    return 0;
    getch();

}
int f1(int n)
{
    int c;
    if(n==1)
    return 1;
    c=n+f1(n-1);
    return c;
}


