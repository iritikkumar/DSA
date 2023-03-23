#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {

    float p[n];
    double a[n],s[n];
    for(int i=0;i<n;i++)
    {
        p[i] = ( tr[i].a + tr[i].b + tr[i].c )/2.0;
        s[i] = (p[i])*(p[i]-tr[i].a)*(p[i]-tr[i].b)*(p[i]-tr[i].c);
        a[i] = sqrt(s[i]);
    }

    for(int j=1;j<n;j++)
    {
        for(int i=0;i<n-j;i++)
        {
            if(a[i]>a[i+1])
            {
                triangle t=tr[i];
                tr[i]=tr[i+1];
                tr[i+1]=t;
                double x=a[i];
                a[i]=a[i+1];
                a[i+1]=x;

            }
        }

    }
    for(int i=0;i<n;i++)
    {
        printf("%lf ",a[i]);

    }
    printf("\n");
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle tr[n];
	for (int i = 0; i < n; i++)
    {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
