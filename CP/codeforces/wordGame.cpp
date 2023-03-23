#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<string>> v(3, vector<string> (n));
        unordered_map <string, int> mp;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
                mp[v[i][j]]++;
            }
        }
        for(int i=0;i<3;i++){
            int pt=0;
            for(int j=0;j<n;j++){
                if(mp[v[i][j]]==1)  pt+=3;
                else if(mp[v[i][j]]==2) pt+=1;
            }
            cout<<pt<<" ";
        }

        cout<<endl;
    }
    return 0;
}