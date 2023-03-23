main()
{
    int a,i,n;
    printf("Enter a number of N: ");
    scanf("%d",&n);
    for(a=1;a<n;a++)
    {
        for(i=2;i<n;i++)
        {
            if(a%i==0)
            break;
        }
        if(a==i)
        printf("\n%d",a);
    }
    getch();

}
