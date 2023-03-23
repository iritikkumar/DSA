#include<stdio.h>
#include<conio.h>
void ArmstrongBW2(int,int);
int main()
{
    int x,y,k;
    printf("Enter the n1 and n2:\n");
    scanf("%d%d",&x,&y);
    ArmstrongBW2(x,y);
    getch();

}
void ArmstrongBW2(int n1,int n2)
{
    int a,b,c,i,j,r,s;
    for(a=n1+1;a<n2;a++)
    {
        r=a;
        b=a;
        for(i=0;r;i++)
        {
            r=r/10;
        }
        j=i;s=0;
        for(j;j>0;j--)
        {
            s=s+pow(b%10,i);
            b=b/10;
        }
        if(a==s)
            printf("%d ",s);
    }

}
