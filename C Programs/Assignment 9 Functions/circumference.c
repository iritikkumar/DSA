#include<stdio.h>
#include<conio.h>
float circumference(int);

int main()
{
    int r;
    float circ;
    printf("Enter the value of radius: ");
    scanf("%d",&r);
    circ = circumference(r);
    printf("Circumference of given circle is %f units.",circ);
    getch();
    return 0;
}

float circumference(int a)
{
    float C;
    C=2*3.14*a;
    return C;
}