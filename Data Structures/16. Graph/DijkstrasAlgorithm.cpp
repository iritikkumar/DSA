#include<bits/stdc++.h>
using namespace std;

void DijkstrasAlgorithm(int V, vector<pair<int,int>> adj[], int src){
    int inf = INT_MAX;
    vector<int> dist(V+1,inf);
    priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    dist[src] = 0;
    pq.push({dist[src],src});
    while(!pq.empty()){
        int node = pq.top().second;
        pq.pop();
        for(auto it: adj[node]){
            if(dist[it.first]>dist[node]+it.second){
                dist[it.first] = dist[node]+it.second;
                pq.push({dist[it.first],it.first});
            }
        }
    }
}

int main(){
    cout<<"anurag gandu"<<endl;
    return 0;
}