main()
{
int a=1,n;
printf("Enter the value of n: ");
scanf("%d",&n);
while(a<=n)
{
printf("\n%d",a*a*a);
a++;
}
printf("\n%d",n*n*(n+1)*(n+1)/4);
getch();
}
