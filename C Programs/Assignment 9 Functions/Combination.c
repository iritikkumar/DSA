#include<stdio.h>
#include<conio.h>
int permutation(int);
int factorial(int);
int main()
{
    int a,b,c,n,r;
    printf("Enter the value of n and r:\n");
    scanf("%d%d",&n,&r);
    a=factorial(n);
    b=factorial(n-r);
    c=factorial(r);
    printf("The Combination is %d",a/(b*c));
    getch();
    return 0;
}
int factorial(int a)
{
    int i,s=1;
    for(i=1;i<=a;i++)
    {
        s=s*i;
    }
    return s;

}
