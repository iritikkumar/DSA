main()
{
int a=1,b,c,x;
printf("Enter a number: ");
scanf("%d",&x);
while(1)
{
    x=x/10;
    if(x==0)
        break;
    a++;
}
printf("There are %d digits in entered number",a);
getch();
}
