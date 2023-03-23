#include<stdio.h>
#include<conio.h>
int isprime(int );
int main()
{
    int a,i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(a=2;a<=n;a++)
    {
        if(isprime(a)&&isprime(a+2))
            printf("%d & %d\n",a,a+2);
    }
    getch();
    return 0;
}
int isprime(int n)
{
    int j;
    for(j=2;j<n;j++)
    {
        if(n%j==0)
            return 0;
    }
    if(n==j)
        return 1;

}
