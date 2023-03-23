main()
{
int a,b,c,d;
printf("Enter the three numbers:\n");
scanf("%d%d%d",&a,&b,&c);
d=(a+b+c)/3;
if((a>d)&&(a>b)&&(a>c))
    printf("%d is greatest.",a);
if((b>d)&&(b>a)&&(b>c))
    printf("%d is greatest.",b);
if((c>d)&&(c>a)&&(c>b))
    printf("%d is greatest.",c);
if(a==b&&b==c)
    printf("Equal numbers.");
getch();
}
