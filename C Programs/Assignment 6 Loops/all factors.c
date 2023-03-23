#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    printf("Enter the number:\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
            printf("%d ",i);
    }

    getch();
    return 0;
}

