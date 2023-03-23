#include <stdio.h>
int main()
{
    int no;
    scanf("%d",&no);
     if(no==2||no==3||no==5||no==7)
      printf("Prime");
      else if(no>=10)
        {
            if((no%2==0)||(no%3==0)||(no%5==0)||(no%7==0))
             printf("composite");
             else
             printf("Prime");
        }
    else
    printf("composite");
    getch();
}
