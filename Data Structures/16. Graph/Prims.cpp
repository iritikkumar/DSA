#include<bits/stdc++.h>
using namespace std;

void Prims(vector<vector<pair<int,int>>>& adj, int n){
    vector<int> key(n,INT_MAX), parent(n,-1);
    vector<bool> mstSet(n,false);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    key[0] = 0;
    pq.push({0,0});

    for(int i=0;i<n-1;i++){
        int u = pq.top().second;
        pq.pop();
        mstSet[u] = true;
        for(auto &it: adj[u]){
            int v = it.first;
            int w = it.second;
            if(mstSet[v]==false && w < key[v]){
                parent[v] = u;
                key[v] = w;
                pq.push({key[v], v});
            }
        }

    }

}

int main(){
    
    return 0;
}