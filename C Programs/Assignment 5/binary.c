#include<stdio.h>
#include<conio.h>
int main()
{
    int a[32]={0},n,i,j;
    printf("Enter the number:");
    scanf("%d",&n);

    for(i=0;n>0;i++)
        {

            a[i]=n%2;
            n=n/2;
        }
        j=--i;
    for(j;j>=0;j--)
    {
        printf("%d",a[j]);
    }
       getch();
}
