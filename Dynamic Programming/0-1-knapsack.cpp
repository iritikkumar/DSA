#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int static t[5][8];

int knapsack(int wt[], int val[], int w, int n){
        if(n==0||w==0)
            return 0;
        if(t[n][w]!=-1)             //memoizationn
            return t[n][w];

        if(wt[n-1]<=w){
            return t[n][w]=max(val[n-1]+knapsack(wt, val, w-wt[n-1],n-1), knapsack(wt, val, w, n-1));
        }
        else
        return t[n][w]=knapsack(wt, val, w, n-1);
}
int main(){
    memset(t,-1,sizeof(t));
    int wt[]={1,3,4,5};
    int val[]={1,4,5,7};
    cout<<knapsack(wt,val,7,4)<<endl;
    return 0;
}