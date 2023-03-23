#include<stdio.h>
#include<stdlib.h>
void inputArray(int *p, int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",p+i);
    }
}
void rotate(int *p, int choice, int size)
{
    int i,temp;
    if(choice==1)
    {
        temp = p[size-1];
        for(i=size-1;i>0;i--)
        {
            p[i] = p[i-1];
        }
        p[0] = temp;
    }
    if(choice==-1)
    {
        temp = p[0];
        for(i=0;i<size-1;i++)
        {
            p[i] = p[i+1];
        }
        p[size-1] = temp;
    }
}
void display(int *p, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",p[i]);
    }
}
int main(){
    int n,ch;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int *arr = (int *) malloc(n*sizeof(int));
    inputArray(arr,n);
    printf("Press -1 for left side rotate\nPress 1 for right side rotate\n");
    scanf("%d",&ch);
    rotate(arr,ch,n);
    display(arr,n);

    return 0;
}