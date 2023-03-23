#include<stdio.h>
#include<conio.h>
struct Book
{
    int bookid;
    char title[20];
    float price;
};
struct Book input();
int main()
{
    struct Book b1;
    b1=input();
    printf("%d %s %f",b1.bookid,b1.title,b1.price);
    getch();
    return 0;
}
struct Book input()
{
    struct Book b;
    printf("Enter bookid, title, price:\n");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.title);
    fflush(stdin);
    scanf("%f",&b.price);
    return b;
}
