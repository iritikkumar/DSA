#include<stdio.h>
#include<conio.h>
#include<string.h>
void capitalise(char []);
int main()
{
    int k;
    char s[32];
    printf("Enter the string:");
    gets(s);
    capitalise(s);
    getch();
    return 0;
}
void capitalise(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
    }
    printf("%s",str);
}
