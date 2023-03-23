#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r,k;
    scanf("%d",&r);
    for(i=0;1;i++)
    {
        for(j=0;j<=(r-i*i-i-1)/(2*i);j++)
        {
            k = (i*i) + (2*i*j) + i + 1;
            if (r == k)
            {
                printf("%d %d",i,j);
                return 0;
            }

        }
    }
    return 0;
}
