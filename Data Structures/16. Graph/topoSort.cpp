#include<bits/stdc++.h>
using namespace std;

// void solve(int node, vector<int> adj[], stack<int> &st, vector<int>& vis){
//     vis[node]=1;
//     for(auto it:adj[node]){
//         if(!vis[it]){
//             solve(it,adj,st,vis);
//         }
//     }
//     st.push(node);
// }
vector<int> topoSort(int V, vector<int> adj[]) 
{
    // vector<int> vis(V, 0),v;      //dfs
    // stack<int> st;
    // for(int i=0;i<V;i++){
    //     if(!vis[i]){
    //         solve(i,adj,st,vis);
    //     }
    // }
    // while(!st.empty()){
    //     v.push_back(st.top());
    //     st.pop();
    // }
    // return v;
    
    vector<int> inDeg(V,0),v;
    for(int i=0;i<V;i++){
        for(auto it:adj[i]){
            inDeg[it]++;
        }
    }
    queue<int> q;
    for(int i=0;i<V;i++){
        if(inDeg[i]==0)
        q.push(i);
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        v.push_back(node);
        for(auto it: adj[node]){
            inDeg[it]--;
            if(inDeg[it]==0)
                q.push(it);
        }
    }
    return v;
}
int main()
{
    vector<int> adj[4];
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(1);
    vector<int> ans = topoSort(4,adj);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
}