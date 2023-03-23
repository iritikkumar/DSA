#include<bits/stdc++.h>
using namespace std;

// int f(int n, int A, vector<int>& B, vector<int>& ans, vector<vector<int>>& dp){
//     if(n==0 || A==0) return 0;
//     if(dp[n-1][A]!=-1)  return dp[n-1][A];
    
//     int take = 0, noT = 0;
//     if(A>=B[n-1])
//         take = 1 + f(n,A-B[n-1],B,ans,dp);
//     noT = f(n-1,A,B,ans,dp);
    
//     if(take>=noT){
//         ans.push_back(n-1);
//         dp[n-1][A] = take;
//     }
//     else{
//         dp[n-1][A] = noT;
//     }
//     return dp[n-1][A];
//     // ans.pop_back();
// }
vector<int> solve(int A, vector<int> &B) {
    int n = B.size();
    vector<int> ans;
    // vector<vector<int>> dp(n+1,vector<int>(A+1,-1));
    vector<vector<int>> dp(n+1,vector<int>(A+1,0));
    vector<vector<bool>> person(n+1,vector<bool>(A+1,0));

    reverse(B.begin(), B.end());
    for(int i=1;i<n+1;i++){
        for(int j=1;j<A+1;j++){
            if(j>=B[i-1]){
                int take = 1+dp[i][j-B[i-1]];
                int noT = dp[i-1][j];
                if(take>=noT){
                    person[i][j] = true;
                }
                dp[i][j] = max(1+dp[i][j-B[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    int m = B.size();
    n= A;
    while(n!=0 && m!=0)
    {
        if(person[m][n])
        {
            ans.push_back(B.size()-m);
            n = n - B[m-1];
        }
        else
        {
            m--;
        }
    }

    // for(int i=1;i<=n;i++){
    //     int k = dp[i][A]-dp[i-1][A];
    //     while(k>0 && k--){
    //         ans.push_back(i-1);
    //     }
        
    // }

    // for(int i=0;i<n+1;i++){
    //     for(int j=0;j<A+1;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int k = f(n,A,B,ans,dp);
    // cout<<k<<endl;
    return ans;
}


int main(){
    vector<int> B,c;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    c = solve(10,B);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}