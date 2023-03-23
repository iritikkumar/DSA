#include<stdio.h>
#include<conio.h>
#include<string.h>
int occurrence(char [], char );
int main()
{
    int k;
    char s[32],a;
    printf("Enter the string:");
    gets(s);
    printf("Enter the character whose occurrence is to be counted:");
    scanf("%c",&a);
    k=occurrence(s,a);
    printf("The occurrence of %c in the entered string is %d",a,k);
    getch();
    return 0;
}
int occurrence(char str[], char e)
{
    int count,i;
    for(i=0,count=0;str[i];i++)
    {
        if(e==str[i])
            count++;
    }
    return count;
}
