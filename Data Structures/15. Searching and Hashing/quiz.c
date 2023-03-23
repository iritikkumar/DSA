#include <stdio.h>
#include <stdlib.h>

void main()
 {
 int k = 5;
 int *p = &k;
 int **m = &p;
 printf("%d%d%d\n", k, *p, **m);
 }