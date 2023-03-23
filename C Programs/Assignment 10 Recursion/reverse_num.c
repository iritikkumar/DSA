#include<stdio.h>
#include<conio.h>
void reverse_num(int);
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    reverse_num(x);
    getch();
}
void reverse_num(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        reverse_num(n/10);

    }
}
