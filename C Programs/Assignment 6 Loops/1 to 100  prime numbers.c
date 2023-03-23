main()
{
    int a,i,n;
    for(a=2;a<=100;a++)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            break;
        }

        if(a==i)
        printf("\n%d",a);
    }
    getch();
}
