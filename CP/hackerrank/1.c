#include<stdio.h>
#include<conio.h>
int main()
{

    /*int n,i,j,m,k;
    scanf("%d",&n);
    m=n;
    k=2*n-1;
  	for(i=1;i<=k;i++)
    {
        m=n;
        for(j=1;j<=k;j++)
        {
            printf("%d ",m);
            if(j==i&&j<=n)
            {
                m--;
            }
            if(j==k-1-i&&j>n)
            {
                m++;
            }
        }
        printf("\n");


    }*/
    int i,j,k,n,m;
    n=5;
    k=9;
    for(i=1;i<=k;i++)
    {
        m=n;
        for(j=1;j<=k;j++)
        {

            /*if(j>=2&&j==i&&j<=5)
            {
                m--;
            }
            printf("%d ",m);
            if(j==10-i&&j>5)
            {
                m++;
                printf("%d ",m);

            }*/
            if((j<=i&&j>1)||(j>10-i)&&j>5)
            {
                m--;
                printf("%d ",m);
            }
        }
        printf("\n");

    }
    return 0;
}
