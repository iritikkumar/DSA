main()
{
int r,s=0,x;
printf("Enter a number: ");
scanf("%d",&x);
while(x)
{
r=x%10;
s=10*(s+r);
x=x/10;
}
printf("%d",s/10);
getch();
}
