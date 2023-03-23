#include<stdio.h>
#include<stdlib.h>
void inputArray(int *p, int *f, int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",p+i);
        f[i] = -1;
    }
}
void countFrequency(int *p,int *f, int size)
{
    int i,j,count;
    for(i=0;i<size;i++)
    {
        count = 1;
        for(j=i+1;j<size;j++)
        {
            if(p[i]==p[j])
            {
                count++;
                f[j] = 0;
            }
        }
        if(f[i]!=0)
        {
            f[i] = count;
        }
    }
    
}
void display(int *p, int *f, int size)
{
    for(int i=0;i<size;i++)
    {
        if(f[i]!=0)
            printf("%d   |   %d\n",p[i],f[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of array: ");;
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    int *fr = (int *)malloc(n*sizeof(int));
    inputArray(arr,fr,n);
    countFrequency(arr,fr,n); 
    display(arr,fr,n);  
}