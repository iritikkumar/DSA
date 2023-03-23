#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,b;
    printf("Enter 10 numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    b=a[0];
    for(i=1;i<10;i++)
        if(b>a[i])
            b=a[i];
    printf("The smallest value is %d.",b);
    getch();
}
