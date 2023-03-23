main()
{
    int i=2,j,n,m;
    printf("Hey! Cumtiee, enter the value of n:");
    scanf("%d",&n);
    m=n;
    while(i<n)
    {
        if(m%i==0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                    break;

            }
            if(i==j)
            {
                printf("%d ",i);
                m=m/i;
            }
        }
        if(m%i!=0)
        {
            i++;
        }
    }
    printf("\nHehehehehehe....");
    /*
    for(i=2;(i<n);i++)
    {
        if(n%i==0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                    break;

            }
            if(i==j)
            {
                printf("%d ",i);
            }
        }

    }*/
    getch();


}
