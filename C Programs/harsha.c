#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n){
        if(n>=1000){
            printf("M");
            n=n-1000;
        }
        else if(n>=500){
            printf("D");
            n=n-500;
        }
        else if(n>=100){
            printf("C");
            n=n-100;
        }
        else if(n>=50){
            printf("L");
            n=n-50;
        }
        else if(n>=10){
            printf("X");
            n=n-10;
        }
        else if(n==9){
            printf("IX");
            n=n-9;
        }
        else if(n==8){
            printf("VIII");
            n=n-8;
        }
        else if(n==7){
            printf("VII");
            n=n-7;
        }
        else if(n==6){
            printf("VI");
            n=n-6;
        }
        else if(n==5){
            printf("V");
            n=n-5;
        }
        else if(n==4){
            printf("IV");
            n=n-4;
        }
        else if(n==3){
            printf("III");
            n=n-3;
        }
        else if(n==2){
            printf("II");
            n=n-2;
        }
        else if(n==1){
            printf("I");
            n=n-1;
        }            
    }
    return 0;
}