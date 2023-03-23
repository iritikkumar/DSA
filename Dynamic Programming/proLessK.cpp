#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int solve(int arr[], int n, int k){
    if(n==0)
        return 0;
    if(dp[n][k]!=-1)
        return dp[n][k];
    if(arr[n-1]<=k){
        return dp[n][k] = solve(arr,n-1,k/arr[n-1]);
    }
    else    
        return dp[n][k] = solve(arr,n-1,k);
}
int countSubSeqProductLessThanK(int arr[], int n, int k){
    memset(dp,-1,sizeof(dp));
    return solve(arr,n,k);
}
int main(){
    int arr[] = {1,2,3,4};
    cout<<countSubSeqProductLessThanK(arr,4,10);
    return 0;
}