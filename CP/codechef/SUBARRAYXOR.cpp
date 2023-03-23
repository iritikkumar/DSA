#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i=2;
        cin>>n;
        cout<<i<<" ";
        for(int j=2;j<n+1;j++){
            cout<<2*j-1<<" ";
        }

    }
    return 0;
}