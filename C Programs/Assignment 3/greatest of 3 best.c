main()
{
    int a,b,c,d;
    printf("Enter the three numbers ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("%d is greatest.",a);
    if(b>a&&b>c)
        printf("%d is greatest.",b);
    if(c>a&&c>b)
        printf("%d is greatest.",c);
    getch();
}

