// 9.Write a program to check whether a date is valid or not.
#include <stdio.h>
int main()
{

    int d, m, y;
    printf("Enter the day: ");
    scanf("%d", &d);
    printf("Enter the month: ");
    scanf("%d", &m);
    printf("Enter the year: ");
    scanf("%d", &y);

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d >= 1 && d <= 31)
        {
            printf("Date is valid.");
        }
        else
        {
            printf("Date is invalid.");
        }
    }
    else
    {
        if (m == 2)
        {
            if ((y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0)))
            {
                if (d >= 1 && d <= 29)
                {
                    printf("Date is valid.");
                }
                else
                {
                    printf("Date is invalid.");
                }
            }
            else
            {
                if (d >= 1 && d <= 28)
                {
                    printf("Date is valid.");
                }
                else
                {
                    printf("Date is invalid.");
                }
            }
        }
        if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            if (d >= 1 && d <= 30)
            {
                printf("Date is valid.");
            }
            else
            {
                printf("Date is invalid.");
            }
        }
    }

    return 0;
}

