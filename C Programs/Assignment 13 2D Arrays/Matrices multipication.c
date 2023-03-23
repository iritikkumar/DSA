#include<stdio.h>
#include<conio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,s;
    printf("Enter elements of matrix 1:\n");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&A[i][j]);

    printf("Enter elements of matrix 2:\n");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&B[i][j]);
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            for(s=0,k=0;k<=2;k++)
                s=s+A[i][k]*B[k][j];
            C[i][j]=s;
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%3d ",C[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
