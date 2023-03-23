#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int i,n,cnt=0;
        cin>>n;
        vector<int> v(n);
        for(i=0;i<n;i++)
            cin>>v[i];
        for(i=n-2;i>=0;i--){
            if(v[n-1]==0){
                cnt=-1;
                break;
            }
            while(v[i]>=v[i+1]){
                v[i] /= 2;
                cnt++;
                if(v[i]==0 && i>0){
                    cnt = -1;
                    break;
                }
            }
            if(v[i]==0 && i>0){
                cnt = -1;
                break;
            }
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}