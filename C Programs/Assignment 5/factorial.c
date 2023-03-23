main()
{
int a=1,n;
double b=1;
printf("Enter a number:");
scanf("%d",&n);
while(a<=n)
{
    b=b*a;
    a++;
}
printf("%lf",b);
getch();
}
