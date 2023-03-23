#include<stdio.h>
#include<conio.h>
int sum_natural(int);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sum_natural(n);
    getch();
    return 0;
}
int sum_natural(int a)
{
    int i,s=0;
    for(i=1;i<=a;i++)
    {
        s=s+i;
    }
    printf("%d",s);
    return 0;

}
