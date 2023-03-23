#include<stdio.h>
#include<conio.h>
struct Coordinate
{
    float x;
    float y;
};
int main()
{
    int q;
    struct Coordinate c;
    printf("Enter the coordinates x and y:\n");
    scanf("%f%f",&c.x,&c.y);
    q=quadrant(c);
    printf("The given point lies in %d quadrant.",q);
    getch();
    return 0;
}
int quadrant(struct Coordinate k)
{
    if(k.x==0||k.y==0)
        return 0;
    else
    {
        if(k.x>0.0&&k.y>0.0)
            return 1;
        if(k.x<0.0&&k.y>0.0)
            return 2;
        if(k.x<0.0&&k.y<0.0)
            return 3;
        if(k.x>0.0&&k.y<0.0)
            return 4;
    }
}
