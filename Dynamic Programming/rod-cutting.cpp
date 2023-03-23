#include<iostream>
#include<cmath>
using namespace std;

int rodCutting(int length[], int price[], int N, int n){
    int t[n+1][N+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<N+1;j++)
            if(i==0||j==0)
                t[i][j]=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<N+1;j++){
            if(length[i-1]<=j)
                t[i][j] = max(price[i-1]+t[i][j-length[i-1]], t[i-1][j]);
            else    
                t[i][j] = t[i-1][j];
        }
    }
    return t[n][N];
        
    
}
int main(){
    int l[]={1,2,3,4,5,6,7,8};
    int price[]={1,5,8,9,10,17,17,20};
    cout<<rodCutting(l,price,8,8);
    // int l[]={1,3,4,5};
    // int price[]={1,4,5,7};
    // cout<<rodCutting(l,price,7,4);
    return 0;
}