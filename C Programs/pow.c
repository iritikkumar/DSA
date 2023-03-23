#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    n=fact(6);
    printf("%d",n);

}

int fact(i)
{
    int f=1;
    while(i>=1)
    {
        f=f*i;
        i--;
    }
    return f;
}
