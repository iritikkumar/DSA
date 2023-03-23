main()
{
int a=1,n;
printf("Enter the value of n: ");
scanf("%d",&n);
while(a>=1&&a<=n)
{
    printf("\n%d",a);
    a++;
}
printf("\n Sum of first %d natural numbers is %d",n,n*(n+1)/2);
getch();
}
