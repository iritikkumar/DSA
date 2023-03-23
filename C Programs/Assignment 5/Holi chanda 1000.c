main()
{
int a=1,b,c,s=0,n;
for(a=1;a<=10;a++)
{
printf("Enter donation  from %d house:",a);
scanf("%d",&n);
s=s+n;
if(s>=1000)
break;
}
printf("Total amount collected:%d from %d houses",s,a);
getch();
}
