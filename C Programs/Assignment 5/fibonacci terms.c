main()
{
int a=-1,b=1,c,n;
printf("Enter the value of n:");
scanf("%d",&n);
while(n)
{
    b=a+b;
    a=b-a;
    printf("\n%d",b);
    n--;


}
getch();
}
