main()
{
  int n,i,a=0,b=0,c=0,d=0,e=0,f=0;
   //Declare varibales here

   //Write your code here
  scanf("%d",&n);
  if(n>=1000)
  {
    a=n/1000;
    n=n%1000;
  }
  if(n>=500&&n<1000)
  {
    b=n/500;
    n=n%500;
  }
  if(n>=100&&n<500)
  {
    c=n/100;
    n=n%100;
  }
  if(n>=50&&n<100)
  {
    d=n/50;
    n=n%50;
  }
  if(n>=20&&n<50)
  {
    e=n/20;
    n=n%20;
  }
    if(n>=10)
  {
    f=n/10;
  }
  printf("1000 %d\n500 %d\n100 %d\n50 %d\n20 %d\n10 %d",a,b,c,d,e,f);
  return 0;

}
