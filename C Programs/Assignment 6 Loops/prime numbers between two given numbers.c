main()
{
    int a,i,n1,n2;
    printf("Enter the values of n1 and n2: ");
    scanf("%d%d",&n1,&n2);
    for(a=n1+1;a<n2;a++)
    {
        for(i=2;i<n2;i++)
        {
            if(a%i==0)
            break;
        }
        if(a==i)
        printf("\n%d",a);
    }
    getch();
}
