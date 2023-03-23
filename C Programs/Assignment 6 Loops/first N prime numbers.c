main()
{
    int a,b,i,n;
    printf("Enter the value of N:");
    scanf("%d",&n);
    a=n;
    for(b=2;a;b++)
        {
            for(i=2;i<b;i++)
            {
                if(b%i==0)
                break;
            }
            if(i==b)
            {
                printf("%d ",b);
                a--;
            }

        }
    getch();
}
