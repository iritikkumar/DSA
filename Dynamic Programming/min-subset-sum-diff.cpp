#include<iostream>
using namespace std;

int minSubsetSumDiff(int a[], int n){
    int range = 0;
    for(int i=0;i<n;i++)
        range+=a[i];

    int t[n+1][range+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<range+1;j++){
            if(i==0)
                t[i][j]=false;
            if(j==0)    
                t[i][j]=true;
        }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<range+1;j++){
            if(a[i-1]<=j){
                t[i][j] = t[i-1][j-a[i-1]] | t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    for(int i=range/2;i>=0;i--){
        if(t[n][i]){
            return range-2*i;
        }
    }
    return range;
}
int main(){
    int val[]={1,2,7};
    cout<<minSubsetSumDiff(val,3)<<endl;
    return 0;
}