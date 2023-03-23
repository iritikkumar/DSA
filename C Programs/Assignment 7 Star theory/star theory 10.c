#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                if(i%2==1&&j%2==1)
                    printf("*");
                if(i%2==1&&j%2==0)
                    printf(" ");

                if(i%2==0&&j%2==0)
                    printf("*");
                if(i%2==0&&j%2==1)
                    printf(" ");
            }
            else
            {
              printf(" ");
            }

        }
        printf("\n");
    }
    getch();
}
