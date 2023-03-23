#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char b[32],a;
    int count,i,n,c;
    printf("Enter the string:");
    gets(b);
    n=strlen(b);
    if(n%2==0)
    {
        for(i=0;i<=(n-2)/2;i++)
        {
            c=b[i]+b[n-i-1];
            b[i]=c-b[i];
            b[n-i-1]=c-b[i];
        }

    }
    else
    {
        for(i=0;i<(n-1)/2;i++)
        {
            c=b[i]+b[n-i-1];
            b[i]=c-b[i];
            b[n-i-1]=c-b[i];
        }
    }
    printf("%s",b);
    getch();
    return 0;
}

