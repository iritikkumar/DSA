/* Program to raise a floating point number to an integer power
eg. a^(n) where a is floating point and n is integer value*/

#include<stdio.h>
float power(float a,int n);
int main()
{
    float a;
    int n;
    printf("Enter a floating point number = ");
    scanf("%f",&a);
    printf("Enter an integer = ");
    scanf("%d",&n);

    printf("%f raised to power %d is %f\n",a,n,power(a,n));
    return 0;
}
float power(float a,int n)
{
    int i;
    float p=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            p=a*p;
        }

        return p;
    }
}
