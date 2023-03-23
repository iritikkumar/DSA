main()
{
    int a=-1,b=1,n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    while(n)
    {
        b=a+b;
        a=b-a;
        n--;
    }
    printf("The value of Nth term of Fibonacci series is %d", b);
    getch();
}
