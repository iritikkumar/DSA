/*An Insurance company follows following rules to calculate
premium.
(1) If a person’s health is excellent and the person is between
25 and 35 years of age and lives in a city and is a male
then the premium is Rs. 4 per thousand and his policy
amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that
the sex is female then the premium is Rs. 3 per thousand
and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25
and 35 years of age and lives in a village and is a male
then the premium is Rs. 6 per thousand and his policy
cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.
Write a program to output whether the person should be
insured or not, his/her premium rate and maximum amount
for which he/she can be insured. */
#include<stdio.h>
#include<conio.h>
int main()
{
    char ht,g,p;
    int age;

    printf("Enter the age of person:\n");
    scanf("%d",&age);
    fflush(stdin);

    printf("Enter the gender:\n");
    scanf("%c",&g);
    fflush(stdin);

    printf("Enter where person lives:\n");
    scanf("%c",&p);
    fflush(stdin);

    printf("Enter health of person:\n");
    scanf("%c",&ht);
    fflush(stdin);

    if(age>25 && age<35)
    {
        if(ht=='e'&& p=='c')
        {
            if(g=='m')
            {
                printf("Insured.\n");
                printf("Premium rate = Rs.4 per thousand.\n");
                printf("Maximum policy amount = Rs.2 lakhs.\n");
            }
            else
            {
                printf("Insured.\n");
                printf("Premium rate = Rs.3 per thousand.\n");
                printf("Maximum policy amount = Rs.1 lakhs.\n");
            }
        }
        else
        {
            if(g=='m')
            {
                printf("Insured.\n");
                printf("Premium rate = Rs.6 per thousand.\n");
                printf("Maximum policy amount = Rs.10,000.\n");
            }
            else
            {
                printf("Not insured.\n");
            }
        }
    }
    else
    {
        printf("No insurance.");
    }
    getch();
    return 0;
}
