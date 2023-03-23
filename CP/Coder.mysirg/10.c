#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    if(y==0)
    {
        printf("IMPOSSIBLE");
    }
    while(y)
    {
        printf("%d ",x*y);
        y--;
    }

    return 0;
}
