#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,r,c;
    cin>>n>>k>>r>>c;
    vector<vector<char>> m(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)%k==(r-1+c-1)%k){
                m[i][j] = 'X';
            }
            else{
                m[i][j] = '.';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<(char)m[i][j];
        }
        cout<<"\n";
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}