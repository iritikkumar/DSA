main()
{
    int i;
    char str[1000];
    gets(str);
    for(i=0;str[i];i++);
    printf("%d",i);
    printf("\n%d",str[1]);
}
