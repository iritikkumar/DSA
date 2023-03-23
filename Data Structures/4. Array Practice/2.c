#include<stdio.h>
#include<stdlib.h>
void inputArray(int *p, int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",p+i);
    }
}
void sort(int *p, int size)
{
    int i,j,temp;
    for(j=1;j<size;j++)
    {
        for(i=0;i<size-j;i++)
        {
            if(p[i]>p[i+1])
            {
                temp = p[i];
                p[i] = p[i+1];
                p[i+1] = temp;
            }
        }
    }
    
}
void display(int *p, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    if(n>1)
    {
        int *arr = (int *) malloc(n*sizeof(int));
        inputArray(arr,n);
        sort(arr,n);
        display(arr,n);
        printf("Second largest value in array is %d",arr[1]);
    }
    return 0;
}