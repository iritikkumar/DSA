#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,s=0,i;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    for(i=n1/2;i>=1&&i<n1;i=i/2)
    {
        n2=n2*2;
        if(i%2!=0)
        {
            s=s+n2;
        }
    }
    if(n1%2!=0)
    {
        printf("Product = %d",n2+s);
    }
    else
    {
        printf("Product = %d",s);
    }
    getch();
    return 0;
}
