#include<bits/stdc++.h>
using namespace std;
int solve(int A[], int B, int n){
    int i=0,j=n-B-1,s=0,Tsum=0;
    for(int k=0;k<n;k++){
        Tsum+=A[k];
    }
    for(int k=i;k<=j;k++){
        s+=A[k];
    }
    int mn = s;
    int cur = s;
    while(j<n-1){
        cur = cur-A[i]+A[j+1];
        mn = min(mn,cur);
        i++;
        j++;
    }
    return Tsum-mn;
}


int main(){
    int arr[] ={5,-2,3,1,2} ;
    cout<<solve(arr,3,5)<<endl;
    return 0;
}