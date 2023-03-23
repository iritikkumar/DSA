#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],r[10],i,j,b;
    printf("Enter 10 numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

    for(j=0;j<=9;j++)
    {
        b=a[j];
        for(i=0;i<=9;i++)
        {
            if(b>a[i])
                b=a[i];

        }
        r[j]=b;
    }
    for(i=0;i<=9;i++)
    {
        printf("%d ",r[i]);
    }
     getch();
     return 0;


}
