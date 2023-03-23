#include<stdio.h>
#include<conio.h>
void separate(int [],int );
int main()
{
    int a[10],i;
    printf("Enter the 10 values:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    separate(a,10);
    getch();
    return 0;
}
void separate(int b[],int n)
{
    int *p,*q;
    int count1=0,count2=0,i,j,k;
    for(i=0;i<10;i++)
    {
        if(b[i]>=0)
            count1++;
        else
            count2++;
    }
    p=calloc(count1,4);
    q=calloc(count2,4);
    for(i=0,j=0,k=0;i<10;i++)
    {
        if(b[i]>=0)
        {
            *(p+j)=b[i];
            j++;
        }
        else
        {
             *(q+k)=b[i];
             k++;
        }
    }
    for(i=0;i<count1;i++)
    {
        printf("%d  ",*(p+i));
    }
    printf("\n");
    for(i=0;i<count2;i++)
    {
        printf("%d  ",*(q+i));
    }
    free(p);
    free(q);

}
