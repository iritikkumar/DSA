#include<bits/stdc++.h>
using namespace std;

void bfs(int V, vector<int> adj[], int src){
    vector<int> dist(V,INT_MAX);
    queue<int> q;
    q.push(src);
    dist[src] = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it: adj[node]){
            if(dist[node]+1 < dist[it]){
                dist[it] = dist[node]+1;
                q.push(it);
            }
        }
    }   
}

int main(){
    
    return 0;
}