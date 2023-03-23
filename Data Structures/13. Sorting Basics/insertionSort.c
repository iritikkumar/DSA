#include<stdio.h>
#include<stdlib.h>

void insertionSort(int *b, int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j>0;j--){
            if(b[j-1]<b[j])
                break;
            else{
                int temp = b[j];
                b[j] = b[j-1];
                b[j-1] = temp;
            }
        }
    }
}
int main(){
    int i,size;
    scanf("%d",&size);
    int *a = (int *)malloc(sizeof(int)*size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    insertionSort(a,size);
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}