main()
{
    int a,b,i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(a=n+1;1;a++)
    {
        for(i=2;1;i++)
    {
        if(a%i==0)
        break;
    }
        if(a==i)
        break;
    }
    printf("%d",a);
    getch();

}
