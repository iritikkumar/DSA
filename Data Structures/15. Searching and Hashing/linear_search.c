#include<stdio.h>
#include<stdlib.h>

int linear_search(int a[], int size, int data){
    int i;
    for(i=0;i<size;i++){
        if(data==a[i])
            return i;
    }
    return -1;
}
int main(){
    
    return 0;
}