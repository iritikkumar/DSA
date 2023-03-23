#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];
int knapsack(vector<int> & wt, vector<int> & val, int w, int n){
        if(w==0)    return 0;
        if(n==0)    return 1e9;
        if(dp[n][w]!=-1)             
            return dp[n][w];

        if(wt[n-1]<=w){
            return dp[n][w]=min(val[n-1]+knapsack(wt, val, w-wt[n-1],n-1), knapsack(wt, val, w, n-1));
        }
        else
            return dp[n][w]=knapsack(wt, val, w, n-1);
}
int solve(vector<int> &A,  vector<int> &B, vector<int> &C){
	int n = C.size(), INF = 1e9;
	int m = -1;
	for(int i=0; i<A.size(); i++){
		m = max(m, A[i]);
	}
	// for(int i=0;i<=n;i++){
    //     for(int j=0;j<=m;j++){
    //         if(j==0)    dp[i][j]=0;
    //         else if(i==0)   dp[i][j] = INF;
    //         else{
    //             if(B[i-1]<=j){
    //                 dp[i][j] = min(dp[i-1][j], C[i-1] + dp[i][j-B[i-1]]);
    //             }
    //             else    
    //                 dp[i][j] = dp[i-1][j];
    //         }
    //     }
    // }
    memset(dp,-1,sizeof(dp));
    int res = knapsack(B,C,m,n);
    int ans=0;
	for(int i=0; i<A.size(); i++){
		ans += dp[n][A[i]];
	}
//    for(int i=0;i<=n;i++){
//         for(int j=0;j<=m;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
	return ans;
}

int main(){
    vector<int> A(5),B(4),C(4);
    for(int i=0;i<5;i++){
        cin>>A[i];
        if(i<4){
            cin>>B[i]>>C[i];
        }
    }
    cout<<solve(A,B,C);
    return 0;
}