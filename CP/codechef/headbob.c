#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int i,n;
	    int yes = 0, ind = 0;
	    scanf("%d",&n);
        fflush(stdin);
	    char a[n];
	    gets(a);
        for(i=0;i<n;i++)
        {
            if(a[i]=='Y')
            {
                yes++;
                break;
            }
            else if(a[i]=='I')
            {
                ind++;
                break;
            }
        }
        if(ind==1)
            printf("INDIAN\n");
        else if(yes==1)
            printf("NOT INDIAN\n");
        else
            printf("NOT SURE\n");

	}
	return 0;
}

