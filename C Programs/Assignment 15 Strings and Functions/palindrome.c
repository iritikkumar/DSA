#include<stdio.h>
#include<conio.h>
#include<string.h>
int palindrome(char [], int);
int main()
{
    int k;
    char s[32],a;
    printf("Enter the string:");
    gets(s);
    k=palindrome(s,strlen(s));
    if(k)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    getch();
    return 0;
}
int palindrome(char str[], int n)
{
    int count,i;
    for(i=0,count=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
            return 0;
    }
    return 1;
}
