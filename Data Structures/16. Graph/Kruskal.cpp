#include<bits/stdc++.h>
using namespace std;

struct node{
    int u,v,w;
    node(int first, int second, int weight){
        u = first;
        v = second;
        w = weight;
    }
};

bool comp(node a, node b){
    if(a.w < b.w)
        return true;
}

int findParent(vector<int>& parent, int node){
    if(node == parent[node])
        return node;
    return parent[node] = findParent(parent, parent[node]);
}

void unionn(vector<int>& parent, vector<int>& Rank, int u, int v){
    u = findParent(parent, u);
    v = findParent(parent, v);
    if(Rank[u]>Rank[v]){
        parent[v] = u;
    }
    else if(Rank[u] < Rank[v]){
        parent[u] = v;
    }
    else{
        parent[v] = u;
        Rank[u]++;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<node> edges;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back(node(u,v,w));
    }
    sort(edges.begin(), edges.end(), comp);
    vector<int> parent(n);
    for(int i=0;i<n;i++)
        parent[i] = i;
    vector<int> Rank(n,0);
    
    int cost = 0;
    vector<pair<int,int>> mst;

    for(auto& it: edges){
        if(findParent(parent,it.v) != findParent(parent, it.u)){
            cost+=it.w;
            mst.push_back({it.u, it.v});
            unionn(parent, Rank, it.u, it.v);
        }
    }
    cout<<cost<<endl;
    return 0;
}