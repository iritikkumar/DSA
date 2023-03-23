#include <bits/stdc++.h>
using namespace std;

bool solve(int i, int pre, vector<int> adj[], vector<int> &color)
{
	if (pre == -1)
		color[i] = 0;
	else
	{
		color[i] = !color[pre];
	}
	for (auto it : adj[i])
	{
		if (color[it] == -1)
		{
			if (!solve(it, i, adj, color))
				return false;
		}
		else if (color[it] == color[i])
			return false;
	}
	return true;
}
bool isBipartite(int V, vector<int> adj[])
{
	vector<int> color(V, -1);
	for (int i = 0; i < V; i++)
	{
		if (color[i] == -1)
		{
			if (!solve(i, -1, adj, color))
				return false;
		}
	}

	// for(int i=0;i<V;i++){         //bfs
	//     if(color[i]==-1){
	//         queue<int> q;
	//         q.push(i);
	//         color[i] = 0;

	//         while(!q.empty()){
	//             int node = q.front();
	//             q.pop();
	//             for(auto it: adj[node]){
	//                 if(color[it]==-1){
	//                     q.push(it);
	//                     color[it] = !color[node];
	//                 }
	//                 else if(color[it]==color[node]){
	//                     return false;
	//                 }
	//             }
	//         }
	//     }
	// }
	return true;
}

int main()
{

	return 0;
}