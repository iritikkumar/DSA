#include<bits/stdc++.h>
using namespace std;
	
void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis, stack<int> &finishingTime, bool flag){
    vis[node] = true;
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it, adj, vis, finishingTime, flag);
        }
    }
    if(flag)
        finishingTime.push(node);
}

void findTopo(vector<vector<int>>& adj, stack<int> &finishingTime){
    vector<bool> vis(adj.size(), false);
    
    for(int i=0;i<adj.size(); i++){
        if(!vis[i]){
            dfs(i, adj, vis, finishingTime, true);
        }
    }
}

int kosaraju(int V, vector<vector<int>>& adj)
{
    int n = adj.size();
    stack<int> finishingTime;
    findTopo(adj, finishingTime);
    vector<vector<int>> adjRev(n);
    
    for(int i=0;i<n;i++){
        for(auto it: adj[i]){
            adjRev[it].push_back(i);
        }
    }
    vector<bool> vis(n, false); 
    int cnt = 0;
    while(!finishingTime.empty()){
        int node = finishingTime.top();
        finishingTime.pop();
        if(!vis[node]){
            cnt++;
            dfs(node, adjRev, vis, finishingTime, false);
        }
    }
    return cnt;
    
}

int main(){
    
    return 0;
}