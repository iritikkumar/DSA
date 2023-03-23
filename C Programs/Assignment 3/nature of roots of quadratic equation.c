main()
{
 int a,b,c,e;
 printf("Enter the values of a,b,c ");
 scanf("%d%d%d",&a,&b,&c);
 printf("Your quadratic equation is %dx*x+%dx+%d=0",a,b,c);
 e=b*b-4*a*c;
 if(e>0)
    printf("\nRoots are REAL");
 if(e<0)
    printf("\nRoots are IMAGINARY");
 if(e==0)
    printf("\nRoots are REAL AND EQUAL");
 getch();
 }
