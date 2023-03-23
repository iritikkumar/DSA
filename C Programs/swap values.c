main()
{
int a,b;
printf("Enter the two numbers ");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The value of a is %d and value of b is %d",a,b);
getch();
}
