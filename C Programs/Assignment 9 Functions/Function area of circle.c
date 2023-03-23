#include<stdio.h>
#include<conio.h>
float area(int);
int main()
{
    int r;
    printf("Enter the value of radius: ");
    scanf("%d",&r);
    area(r);
    getch();
    return 0;
}
float area(int a)
{
    float A;
    A=3.14*a*a;
    printf("Area of given circle is %f square units.",A);
    return 0;
}
