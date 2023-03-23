#include<bits/stdc++.h>
using namespace std;

int parent[100000];
int Rank[100000];
void makeSet(int n){
    for(int i=1;i<=n;i++){
        parent[i] = i;  
        Rank[i] = 0;
    }
}

int findParent(int node){
    if(parent[node]==node)
        return node;
    return parent[node] = findParent(parent[node]);
}

void Union(int u, int v){
    u = findParent(u);
    v = findParent(v);

    if(Rank[u] < Rank[v]){
        parent[u] = v;
    }
    else if(Rank[u] > Rank[v]){
        parent[v] = u;
    }
    else{
        parent[v] = u;
        Rank[u]++;
    }
}

int main(){
    
    return 0;
}