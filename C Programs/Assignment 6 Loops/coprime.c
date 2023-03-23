#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,hcf,i;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    //for HCF
    for(i=1;i<=a||i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            hcf=i;
    }
    if(hcf==1)
        printf("Co-Prime");
    else
        printf("Not Co-Prime");
    getch();
    return 0;
}
