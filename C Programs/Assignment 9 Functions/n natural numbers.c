#include<stdio.h>
#include<conio.h>
void natural(int);
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    natural(n);
    getch();
}
void natural(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("\n%d",i);
    }

}
