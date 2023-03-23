#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
int* dma(int [], int [], int, int);
int main(){
    int i,n1,n2;
    printf("Enter the sizes of the two arrays: ");
    scanf("%d%d",&n1,&n2);
    int a[n1],b[n2];
    printf("Enter the elements of first aray:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second aray:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    int *k = dma(a,b,n1,n2);
    printf("The address is: %d",k);
    free(k);
    getch();
    return 0;
}
int* dma(int d[], int e[], int x, int y)
{
    int *p = calloc(x+y,4);
    int i;
    for(i=0;i<x+y;i++)
    {
        if(i<x){
            *(p+i)=d[i];
        }
        else{
            *(p+i)=e[i-x];
        }
    }
    for(i=0;i<x+y;i++)
    {
        printf("%d ",*(p+i));
    }
    return p;
}