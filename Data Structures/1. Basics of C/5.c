#include<stdio.h>
#include<conio.h>
struct Temp{
        float max,min;
    };

float minAvg(struct Temp [], int );
float maxAvg(struct Temp [], int );
int main(){
    int i,n;
    float a,b;
    printf("Enter the number of days: ");
    scanf("%d",&n);
    struct Temp d[n];
    printf("Enter maximun and minimum temp of days:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%f",&d[i].max);
        scanf("%f",&d[i].min);
    }
    a=minAvg(d,n);
    b=maxAvg(d,n);
    printf("The average of minimum temp is %0.2f\n",a);
    printf("The average of maximum temp is %0.2f",b);
    
    getch();
    return 0;
}
float minAvg(struct Temp t[], int x)
{
    float s=0,avg;
    for(int i=0;i<x;i++)
    {
        s=s+t[i].min;
    }
    return s/x;
}
float maxAvg(struct Temp t[], int x)
{
    float s=0,avg;
    for(int i=0;i<x;i++)
    {
        s=s+t[i].max;
    }
    return s/x;
}
