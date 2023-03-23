#include<stdio.h>
#include<conio.h>
void binary(int);
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    binary(x);
    getch();
}
void binary(int n)
{
    if(n>0)
    {
        binary(n/2);
        printf("%d",n%2);
    }
}

