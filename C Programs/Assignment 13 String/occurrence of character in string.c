#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[32],a;
    int count,i;
    printf("Enter the string:");
    gets(str);
    printf("Enter the character whose occurrence is to be counted:");
    scanf("%c",&a);
    for(i=0,count=0;str[i];i++)
    {
        if(a==str[i])
            count++;
    }
    printf("The occurrence of %c in %s is %d",a,str,count);

    getch();
    return 0;

}
