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
    printf("%s",strupr(str));
    */
    for(i=0;str[i];i++)
    {
        if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
    }
    printf("%s",str);
    getch();
    return 0;

}

