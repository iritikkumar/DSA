#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,pk;
        cin>>n>>pk;
        if( (n%2==0 && pk>(n/2)-1) || (n%2==1) &&  pk>n/2){
            cout<<"-1"<<endl;
        }
        else{
            int cnt = 0, i=1,l=1,h=n;
            cout<<n<<endl;
            while(cnt<pk){
                cout<<l++<<" "<<h--<<" ";
                cnt++;
                i+=2;
            }
            while(i<=n){
                cout<<"0 ";
                i++;
            }
            cout<<endl;
        }
    }
    return 0;
}