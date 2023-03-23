main()
{
int s=0,n;
printf("Enter a number: ");
scanf("%d",&n);
while(n>=10)
{
    s=s+n%10;
    n=n/10;

}
printf("Sum of digits of given numbers is %d",s);
getch();
}
