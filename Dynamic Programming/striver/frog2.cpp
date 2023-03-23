#include<bits/stdc++.h>
using namespace std;

int solve(int i, vector<int>& arr, vector<int>& dp, int k){
    if(i<=0) return 0;
    if(dp[i]!=-1)   return dp[i];
    int a = 1e9;
    for(int j=1;j<=k;j++){
        if(i-j>=0)
            a = min(abs(arr[i]-arr[i-j]) + solve(i-j,arr,dp,k), a);
    }
    return dp[i] = a;
}

int frogK(vector<int>& arr, int k){
    int n = arr.size();
    vector<int> dp(n+5,-1);
    return solve(n-1,arr,dp,k);
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];
    cout<<endl;

    cout<<frogK(arr,k)<<endl;
    return 0;
}