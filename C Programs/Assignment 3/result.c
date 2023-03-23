main()
{
char g='%';
int a,b,c,d,e;
float f;
    printf("Enter your marks of English ");
    scanf("%d",&a);
    printf("Enter your marks of Physics ");
    scanf("%d",&b);
    printf("Enter your marks of Mathematics ");
    scanf("%d",&c);
    printf("Enter your marks of Chemistry ");
    scanf("%d",&d);
    printf("Enter your marks of Computer Science ");
    scanf("%d",&e);
f=(a+b+c+d+e)/5;
if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
    printf("Pass with %f%c marks",f,g);
else
    printf("Fail");
getch();
}
