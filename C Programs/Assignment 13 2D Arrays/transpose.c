#include<stdio.h>
#include<conio.h>
int main()
{
    int A[3][3],i,j;
    printf("Enter elements of matrix:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%d",&A[i][j]);
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%3d ",A[j][i]);
        printf("\n");
    }

    getch();
    return 0;

}
