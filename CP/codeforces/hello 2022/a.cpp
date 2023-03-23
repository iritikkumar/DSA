#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int i,j,n,k;
        cin>>n>>k;
        if(k>(n+1)/2)
            cout<<"-1"<<endl;
        else{
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(i==j && i%2==0 && k>0){
                        cout<<"R";
                        k--;
                    }
                    else
                        cout<<".";
                }
                cout<<endl;
            }
        }
        
    }
    return 0;
}