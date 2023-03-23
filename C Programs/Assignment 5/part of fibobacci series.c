main()
{
    int a=-1,b=1,c,d,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(1)
    {
        b=a+b;
        a=b-a;

        if(n==b)
            break;
        if(b>n)
            break;
    }
    if(b==n)
        printf("Yes, given number is a part of fibonacci series.");
    else
        printf("No, given number does not lie in fibonacci series.");
    getch();
}
