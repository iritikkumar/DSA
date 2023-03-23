main()
{
int a=1,n;
printf("Enter value of n: ");
scanf("%d",&n);
while(a<=n)
{
printf("\n%d",a*a);
a++;
}
printf("\n%d",n*(n+1)*(2*n+1)/6);
}
