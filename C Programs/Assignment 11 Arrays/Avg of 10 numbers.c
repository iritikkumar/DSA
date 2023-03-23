#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,s=0;
    float avg;
    printf("Enter 10 numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    //Calculating Sum
    for(i=0;i<=9;i++)
    {
        s=s+a[i];
    }
    avg=s/10.0;
    printf("The average of 10 numbers is %f",avg);
    getch();

}
