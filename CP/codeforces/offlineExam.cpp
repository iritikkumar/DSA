#include <bits/stdc++.h>
using namespace std;

long long dp[1002];
long long solve(int arr[], int i)
{
    long long take = 0, noT = 0;
    if (i < 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    take = arr[i] + solve(arr, i - 2);
    noT = solve(arr, i - 1);
    return dp[i] = max(take, noT);
}
long long FindMaxSum(int arr[], int n)
{
    memset(dp, -1, sizeof(dp));
    return solve(arr, n - 1);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)   cin>>arr[i];
        cout<<FindMaxSum(arr,n)<<endl;
    }
    return 0;
}