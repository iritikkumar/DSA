#include<stdio.h>
#include<conio.h>
#include<string.h>
int cmpstrings(char [],char []);
int main()
{
    char str[2][20],i=0,count=0,k;
    printf("Enter two strings:");
    for(i=0;i<=1;i++)
        gets(str[i]);
    k=cmpstrings(str[0],str[1]);
    /*
    k=strcmp(str[0],str[1]);
    */
    if(k==0)
        printf("Same strings");
    if(k==-1)
        printf("Strings in dictionary order");
    if(k==1)
        printf("Strings in opposite of dictionary order");
    getch();
    return 0;
}
int cmpstrings(char a[],char b[])
{
    int i,j,d,e;
    d=strlen(a);
    e=strlen(b);
    if(d==e)
    {
        for(i=0,j=0;i<d;i++)
        {
            if(a[i]==b[i])
                j++;
        }
        if(j==d-1)
            return 0;
    }
}
