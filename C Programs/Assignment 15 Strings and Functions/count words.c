#include<stdio.h>
#include<conio.h>
#include<string.h>
int countwords(char [], int );
int main()
{
    int k;
    char s[32];
    printf("Enter the string:");
    gets(s);
    k=countwords(s,strlen(s));
    printf("The number of words in the entered string is %d",k+1);
    getch();
    return 0;
}
int countwords(char str[], int n)
{
    int count,i;
    for(i=0,count=0;i<n;i++)
    {
        if(str[i]==' ')
            count++;
    }
    return count;
}
