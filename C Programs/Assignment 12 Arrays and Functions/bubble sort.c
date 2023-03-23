#include<stdio.h>
#include<conio.h>
void bubble_sort(int [], int);
int main()
{
    int a[10],i;
    printf("Enter 10 numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,10);
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }


    getch();
}
void bubble_sort(int A[], int size)
{
    int i,j;
    for(j=1;j<=9;j++)
    {
        for(i=0;i<=9-j;i++)
        {
            if(A[i]>A[i+1])
            {
                int t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;

            }
        }

    }
}
