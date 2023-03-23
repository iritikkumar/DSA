main()
{
  int a,b,n,f,s=0,i;
   //Declare varibales here

   //Write your code here
  scanf("%d",&n);
  f=n;
  a=n;
  for(i=0;a;i++)
  {
    a=a/10;
  }
  for(;i;i--)
  {
    b=n%10;
    s=10*(s+b);
    n=n/10;
  }
  s=s/10;
  printf("%d",f-s);
  return 0;

}

