#include <bits/stdc++.h>
using namespace std;

void solve(int node, vector<int> adj[], vector<int> &vis, vector<int> &dfs)
{
    dfs.push_back(node);
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            solve(it, adj, vis, dfs);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    vector<int> dfs, vis(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            solve(i, adj, vis, dfs);
        }
    }
    return dfs;
}
int main()
{
    cout<<1<<endl;
    return 0;
}