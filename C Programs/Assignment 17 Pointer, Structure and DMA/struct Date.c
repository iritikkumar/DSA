#include<stdio.h>
#include<conio.h>
struct Date
{
    int day;
    char month[10];
    int year;
};
struct Date input();
int main()
{
    struct Date d1;
    d1=input();
    printf("%d-%s-%d",d1.day,d1.month,d1.year);
    getch();
    return 0;
}
struct Date input()
{
    struct Date d;
    printf("Enter day, month, year:\n");
    scanf("%d",&d.day);
    fflush(stdin);
    gets(d.month);
    fflush(stdin);
    scanf("%d",&d.year);
    return d;
}
