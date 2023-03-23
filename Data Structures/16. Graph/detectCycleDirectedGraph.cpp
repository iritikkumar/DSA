#include<bits/stdc++.h>
using namespace std;

bool solve(int node, vector<int> adj[], vector<int>& vis, vector<int>& dfsVis){
    vis[node] = 1;
    dfsVis[node] = 1;
    
    for(auto it: adj[node]){
        if(!vis[it]){
            if(solve(it, adj, vis, dfsVis))
                return true;
        }
        else if(dfsVis[it])
            return true;
    }
    dfsVis[node] = 0;
    return false;
}
bool isCyclic(int V, vector<int> adj[]) {
    vector<int>vis(V,0),dfsVis(V,0);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(solve(i,adj,vis,dfsVis)){
                return true;
            }
        }
    }
    return false;
}
int main(){
    
    return 0;
}