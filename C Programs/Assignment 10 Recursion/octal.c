#include<stdio.h>
#include<conio.h>
void octal(int);
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    octal(x);
    getch();
}
void octal(int n)
{
    if(n>0)
    {
        octal(n/8);
        printf("%d",n%8);
    }
}

