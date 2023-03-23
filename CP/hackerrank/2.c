#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,l,count=0;
    char s[1000],d[10]={'0','1','2','3','4','5','6','7','8','9'};
    scanf("%[^\n]%*c", s);
    l=strlen(s);
    for(int j=0;j<10;j++)
    {

        for(i=0,count=0;i<l;i++)
        {
            if(s[i]==d[j])
                count++;
        }
        printf("%d ",count);
    }
    return 0;
}
