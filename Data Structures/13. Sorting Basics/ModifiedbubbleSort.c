#include <stdio.h>
#include <stdlib.h>
// int isSorted(int *arr, int n){
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1])
//             return 0;
//     }
//     return 1;
// }
void bubbleSort(int *b, int n){
    int flag;
    for(int r=1;r<n;r++){
        // if(isSorted(b,n))
        //     break;
        // else
            flag=0;
            for(int i=0;i<n-r;i++){
                if(b[i]>b[i+1]){
                    flag=1;
                    int temp = b[i];
                    b[i] = b[i+1];
                    b[i+1] = temp;
                }
            }
            if(flag==0)
                break;
    }
}
int main(){
    int i,size;
    scanf("%d",&size);
    int *a = (int *)malloc(sizeof(int)*size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    bubbleSort(a,size);
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    return 0;
}