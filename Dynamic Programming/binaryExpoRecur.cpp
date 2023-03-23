#include<bits/stdc++.h>
using namespace std;

int M = 1e9+7;

int binaryExpoRecur(int a, int b){
    if(b==0)    return 1;
    int res = binaryExpoRecur(a,b/2);
    if(b&1){
        return (a * (res * 1LL * res)%M)%M;
    }
    else{
        return (res * 1LL * res)%M;
    }
}

int binaryExpoIter(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a)%M;
        }
        a = (a * 1LL *a)%M;
        b>>=1;
    }
    return ans;
}

int main(){
    int x;
    cin>>x;
    cout<<binaryExpoRecur(2,19)<<endl;
    cout<<binaryExpoIter(2,20)<<endl;
    // cout<<ans<<endl;
    return 0;
}