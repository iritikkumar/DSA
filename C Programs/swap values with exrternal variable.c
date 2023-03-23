main()
{
int a,b,c;
printf("Enter two numbers ");
scanf("%d%d",&a,&b);
c=a+b;
a=c-a;
b=c-a;
printf("New values of a is %d and b is %d",a,b);
getch();
}
