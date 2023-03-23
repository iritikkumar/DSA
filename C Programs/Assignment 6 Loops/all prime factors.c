#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,j;
    printf("Enter the number:\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                    break;
            }
            if(i==j)
                printf("%d ",i);

        }


    }

    getch();
    return 0;
}

