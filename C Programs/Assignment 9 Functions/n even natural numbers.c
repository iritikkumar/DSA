#include<stdio.h>
#include<conio.h>
void neven(int);
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    neven(n);
    getch();
}
void neven(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("\n%d",2*i);
    }

}
