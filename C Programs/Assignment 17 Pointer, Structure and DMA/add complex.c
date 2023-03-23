#include<stdio.h>
#include<conio.h>
struct complex
{
    float x;
    float y;
};
struct complex addcomplex(struct complex ,struct complex );
int main()
{
    struct complex c1,c2,s;
    printf("Enter the real part and imaginary part:\n");
    scanf("%f%f",&c1.x,&c1.y);
    printf("Enter the real part and imaginary part:\n");
    scanf("%f%f",&c2.x,&c2.y);
    s=addcomplex(c1,c2);
    printf("Sum of given two complex numbers is in %f+i%f quadrant.",s.x,s.y);
    getch();
    return 0;
}
struct complex addcomplex(struct complex a,struct complex b)
{
    struct complex l;
    l.x=a.x+b.x;
    l.y=a.y+b.y;
    return l;
}
