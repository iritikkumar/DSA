#include<stdio.h>
#include<conio.h>
void primebw2(int,int);
int main()
{
    int x,y;
    printf("Enter the numbers:\n");
    scanf("%d%d",&x,&y);
    primebw2(x,y);
    getch();
}
void primebw2(int n1,int n2)
{
    int a,i;
    for(a=n1+1;a<n2;a++)
    {
        for(i=2;1;i++)
        {
            if(a%i==0)
            break;
        }
        if(a==i)
        printf("%d\n",a);
    }
}
