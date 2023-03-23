#include<bits/stdc++.h>
using namespace std;


int dist(int x1, int y1, int x2, int y2){
    return abs(x1-x2) + abs(y1-y2);
}

void solve(){
    int n,m,sx,sy,d;
    cin>>n>>m>>sx>>sy>>d;

    if(dist(n,m,sx,sy)<=d){
        cout<<-1<<endl;
        return;
    }
    if((sx-1> d && m-sy > d )||(n-sx >d && sy-1>d)){
        cout<<n-1+m-1<<endl;
        return;
    }
    cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}