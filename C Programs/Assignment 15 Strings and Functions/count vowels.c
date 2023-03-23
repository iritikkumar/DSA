#include<stdio.h>
#include<conio.h>
#include<string.h>
int countvowel(char [], int );
int main()
{
    int k;
    char s[32];
    printf("Enter the string:");
    gets(s);
    k=countvowel(s,strlen(s));
    printf("The number of vowels in the entered string is %d",k);
    getch();
    return 0;
}
int countvowel(char str[], int n)
{
    int count,i;
    /*strlwr(str);*/
    for(i=0,count=0;i<n;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            count++;
    }
    return count;
}
