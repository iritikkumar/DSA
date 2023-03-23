main()
{
int a,b,c;
printf("Enter the three numbers; ");
scanf("%d%d%d",&a,&b,&c);
printf("%d",(a>b)?(a>c)?a:c:(b>c)?b:c);
/*
if(a>b)
    if(a>c)
    printf("%d is greatest.",a);
    else
    printf("%d is greatesr.",c);
else
    if(b>c)
    printf("%d is greatest.",b);
    else
    printf("%d is greatest.",c);
    */
getch();


}
