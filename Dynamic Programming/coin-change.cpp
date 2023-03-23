#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int coinChange1(int coin[], int sum, int n){
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<sum+1;j++){
            if(i==0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;
        }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coin[i-1]<=j)
                t[i][j] = t[i][j-coin[i-1]] + t[i-1][j];
            else    
                t[i][j] = t[i-1][j];
        }
    }
    return t[n][sum];
}
int coinChange2(int coin[], int sum, int n){
    int d = INT_MAX-1;
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        t[0][i]=d;
    }
    for(int i=1;i<n+1;i++){
        t[i][0]=0;
    }   
    for(int j=1;j<sum+1;j++){
        if(j%coin[0]==0)
            t[1][j] = j/coin[0];
        else
            t[1][j] = d;
    }
    for(int i=2;i<n+1;i++)
        for(int j=1;j<sum+1;j++){
            if(coin[i-1]<=j)
                t[i][j] = min(1+t[i][j-coin[i-1]], t[i-1][j]);
            else    
                t[i][j] = t[i-1][j];
        }
    
    return t[n][sum];
}
int main(){
    int coin[]={1,2,4};
    cout<<coinChange1(coin,5,3)<<endl;
    cout<<coinChange2(coin,5,3)<<endl;
    return 0;
}