main()
{
int a,s=0,n;
printf("Enter a number: ");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
s=s+a;
a++;
}
printf("%d",s);
getch();
}
