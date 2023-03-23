#include<bits/stdc++.h>
using namespace std;


int main(){
    int x,res = 0;
    cin>>x;

    while(x){
        int rem = x%10;
        cout<<rem<<" ";
        res = res*10 + rem;
        x/=10;
    }
    cout<<res;
    return 0;
}