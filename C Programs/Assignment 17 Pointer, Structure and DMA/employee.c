#include<stdio.h>
#include<conio.h>
struct Employee
{
    int empid;
    char name[32];
    float salary;
};
void display(struct Employee [],int);
struct Employee input();
void salarysort(struct Employee [], int );

int main()
{
    int i,n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    struct Employee emp[n];
    for(i=0;i<n;i++)
    {
        emp[i]=input();
    }
    salarysort(emp,n);
    display(emp,n);
    getch();
    return 0;
}
struct Employee input()
{
    struct Employee e;
    printf("Enter empid, name, salary:\n");
    scanf("%d",&e.empid);
    fflush(stdin);
    gets(e.name);
    fflush(stdin);
    scanf("%f",&e.salary);
    return e;
}
void display(struct Employee a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d   %s   Rs%f\n",a[i].empid,a[i].name,a[i].salary);
    }
}
void salarysort(struct Employee A[], int n)
{
    int i,j;
    struct Employee k;
    for(j=1;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            if(A[i].salary>A[i+1].salary)
            {
                k=A[i];
                A[i]=A[i+1];
                A[i+1]=k;
            }
        }

    }
}

