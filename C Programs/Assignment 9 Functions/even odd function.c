#include<stdio.h>
#include<conio.h>
int even_odd(int);
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(even_odd(x))
        printf("Even");
    else
        printf("Odd");

    getch();
}
int even_odd(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}
