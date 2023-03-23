#include<stdio.h>
#include <stdlib.h>

void selectionSort(int *b, int n){
    int min,iTemp;
    for(int j=0;j<n-1;j++){
        min = b[j];
        iTemp=j;
        for(int i=j;i<n;i++){
            if(min>b[i]){
                min = b[i];
                iTemp = i;
            }
        }
        int temp = b[j];
        b[j] = b[iTemp];
        b[iTemp] = temp;
    }
}
int main(){
    int i,size;
    scanf("%d",&size);
    int *a = (int *)malloc(sizeof(int)*size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    selectionSort(a,size);
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}