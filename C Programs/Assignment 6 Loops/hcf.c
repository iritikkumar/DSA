#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,hcf,i;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a||i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            hcf=i;
    }
    printf("HCF is %d",hcf);
    getch();
    return 0;
}
