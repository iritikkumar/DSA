#include<stdio.h>
#include<conio.h>
int prime(int);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    prime(n);
    getch();
    return 0;
}
int prime(int a)
{
    int i;
    if(a==1)
    {
        printf("Neither Prime nor Composite");
        return 0;
    }
    else
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            break;
        }
        if(a==i)
        {
            printf("Prime");
            return 1;
        }
            else
        {
            printf("Not Prime");
            return 0;

        }
    }

}
