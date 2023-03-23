main()
{
int a;
printf("Enter the year ");
scanf("%d",&a);
if(a%400==0||a&100&&a%4==0)
    printf("Leap Year");
else
    printf("Not a Leap Year");
/*
if(a%100==0)
{
    if(a%400)
        printf("%d is a Leap Year",a);
    else
        printf("%d is not a Leap Year",a);
}
else
{
    if(a%4==0)
        printf("%d is Leap Year",a);
    else
        printf("%d is not a leap Year",a);
}
*/
getch();
}
