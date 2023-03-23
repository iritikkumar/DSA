#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> v(n),v1;
    for(int i=0;i<n;i++)    cin>>v[i];
    v1 = v;
    for(int i=0;i<n;i++){
        sort(v1[i].begin(),v1[i].end());
    }
    map<string, vector<int>> mp;
    for(int i=0;i<n;i++){
        mp[v1[i]].push_back(i);
    }
    for(int i=0;i<n;i++){
        if(mp.find(v1[i])!=mp.end())
        {
            int l = mp[v1[i]].size();
            for(int j=0;j<l;j++){
                cout<<v[mp[v1[i]][j]]<<" ";
            }
            cout<<endl;
            mp.erase(v1[i]);
        }
    }
    
    return 0;
}