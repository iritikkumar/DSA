main()
{
int a=1,b,c,s=0,n;
for(a=1;a<=5;)
{
printf("Enter a number: ");
scanf("%d",&n);
    if(n%2==0)
    {
    s=s+n;
    a++;
    }
    else
        continue;
}
printf("Sum of 5 even numbers out of entered numbers is %d",s);
getch();
}
