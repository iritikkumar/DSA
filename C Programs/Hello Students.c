#include<stdio.h>
#include<conio.h>
main()
{
    int a,n,s=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(;n;)
    {
      s=s+n%10;
      n=n/10;
    }
    printf("%d",s);
    getch();
}
