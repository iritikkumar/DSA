#include<stdio.h>
#include<conio.h>
#include<string.h>
int alphanumeric(char [], int);
int main()
{
    int k;
    char s[32],a;
    printf("Enter the string:");
    gets(s);
    k=alphanumeric(s,strlen(s));
    if(k)
        printf("Alphanumeric");
    else
        printf("Not Alphanumeric");
    getch();
    return 0;
}
int alphanumeric(char str[], int n)
{
    int count,i;
    for(i=0;i<n;i++)
    {
        if(str[i])
            return 0;
    }
    return 1;
}

