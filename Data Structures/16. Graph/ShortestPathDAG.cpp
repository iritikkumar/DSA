#include <bits/stdc++.h>
using namespace std;
void solveTopo(int node, vector<pair<int, int>> adj[], stack<int> &st, vector<int> &vis)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it.first])
        {
            solveTopo(it.first, adj, st, vis);
        }
    }
    st.push(node);
}
stack<int> topoSort(int V, vector<pair<int, int>> adj[])
{
    vector<int> vis(V, 0), v; // dfs
    stack<int> st;
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            solveTopo(i, adj, st, vis);
        }
    }
    return st;
}
void ShortestPathDAG(int V, vector<pair<int, int>> adj[], int src)
{
    int inf = INT_MAX;
    vector<int> dist(V, inf);
    stack<int> topo = topoSort(V,adj);
    dist[src] = 0;
    while(!topo.empty()){
        int node = topo.top();
        topo.pop();
        if(dist[node]!=inf){
            for(auto it: adj[node]){
                if(dist[node] + it.second < dist[it.first]){
                    dist[it.first] = dist[node] + it.second;
                }
            }
        }
    }
}
int main()
{

    return 0;
}