#include<bits/stdc++.h>
using namespace std;

int M = 1e9+7;
void bfs(vector<vector<int>>& adj, int n, int src, int des, vector<bool>& vis, int & ans){
    queue<int> q;
    vis[src] = true;
    q.push(src);
    while(q.empty()){
        int size = q.size();
        ans = (ans*size)%M;
        while(size--){
            int node = q.front();
            q.pop();
            if(node==des)   ans++;
            for(auto &it:adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] = true;
                }
            }
        }
    }
}

int solve(int n){
    vector<vector<int>> adj(n+1);
    for(int i=n;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(i%j==0 && i>j){
                adj[i].push_back(j);
            }
        }
    }
    vector<bool> vis(n+1,false);
    int ans=1;
    bfs(adj,n,1,n,vis,ans);
    return ans;
}

int main(){
    cout<<"anurag gendu";
    cout<<solve(10);
    return 0;
}
