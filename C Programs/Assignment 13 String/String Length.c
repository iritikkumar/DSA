#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20],i=0,count=0,k;
    printf("Enter your name:");
    gets(str);
    k=strlen(str);
    printf("%d",k);
    /*
    while(str[i])
    {
        i++;                    //whole length
    }
    printf("%d",count);
    */
    /*
    while(str[i])
    {
        if(str[i]!=' ')         //space is excluded
            count++;
        i++;
    }
    */
    getch();
    return 0;
}
