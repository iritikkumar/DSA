#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[32],a;
    int count,i;
    printf("Enter the string:");
    gets(str);
    /*
    printf("%s",strlwr(str));
    */
    for(i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
    }
    printf("%s",str);
    getch();
    return 0;

}

