#include <bits/stdc++.h>
using namespace std;

bool cycledfs(int i, int pre, vector<int> adj[], vector<int> &vis)
{
    vis[i] = 1;
    for (auto it : adj[i])
    {
        if (!vis[it])
        {
            if (cycledfs(it, i, adj, vis))
                return true;
        }
        else if (it != pre)
            return true;
    }
    return false;
}

bool isCycle(int V, vector<int> adj[])
{
    vector<int> vis(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            if (cycledfs(i, -1, adj, vis))
                return true;
        }
    }
    return false;

    // vector<int> vis(V,0);           // using bfs
    // for(int i=0;i<V;i++){
    //     if(!vis[i]){
    //         queue<pair<int,int>> q;
    //         q.push({i,-1});
    //         vis[i] = 1;
    //         while(!q.empty()){
    //             int node = q.front().first;
    //             int par = q.front().second;
    //             q.pop();

    //             for(auto it: adj[node]){
    //                 if(!vis[it]){
    //                     q.push({it,node});
    //                     vis[it] = 1;
    //                 }
    //                 else if(it!=par){
    //                     return true;
    //                 }
    //             }
    //         }
    //     }
    // }
    // return false;
}
int main()
{
    cout<<"hello";
    return 0;
}