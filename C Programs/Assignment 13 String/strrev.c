#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[32],a;
    int count,i;
    printf("Enter the string:");
    gets(str);
    printf("%s",strrev(str));
    getch();
    return 0;

}


