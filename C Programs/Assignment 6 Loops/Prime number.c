#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b=0,c,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==1)
        printf("Neither Prime nor Composite");
    else
    {   for(a=2;a<n;a++)
        {
            c=n/a;
            b=c*a;
                if(b==n)
                    break;
        }

        if(b==n)
            printf("Not Prime");
        else
            printf("Prime");
    }
    getch();
}


