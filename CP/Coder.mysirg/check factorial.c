main()
{
  int n,a,f=1;
   //Declare varibales here

   //Write your code here
  scanf("%d",&n);
  if(n==1)
    printf("0 1");
  else
  {
          for(a=1;1;a++)
      {
        f=f*a;
        if(f==n)
        {
            printf("%d",a);
            break;
        }
        if((f-n)>0)
        {
            printf("-1");
            break;
        }
       }



  }
}


