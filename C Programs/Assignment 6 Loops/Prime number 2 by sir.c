main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
        if(n==i)
        printf("Prime");
        else
        printf("Not Prime");
        getch();


}
