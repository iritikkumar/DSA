#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> vis(V, 0), bfs;

    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while (!q.empty())
            {
                int node = q.front();
                bfs.push_back(node);
                q.pop();

                for (auto it : adj[node])
                {
                    if (!vis[it])
                    {
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
        }
    }
    return bfs;
}
int main()
{

    return 0;
}