#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,s=0;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    while(n1)
    {
        if(n1%2==0)
        {
            n1=n1/2;
            n2=n2*2;
        }
        else
        {
            s=s+n2;
            n1=n1/2;
            n2=n2*2;
        }
    }
    printf("Product is %d",s);
    getch();
    return 0;
}
