#include<bits/stdc++.h>
using namespace std;

vector<int> bellman_ford(int n, vector<vector<int>>& edges, int S) { 
    vector<int> dist(n, 1e8);
    dist[S] = 0;
    for(int i=0;i<n-1;i++){             //relax all edges n-1 times
        for(auto e: edges){
            if(dist[e[0]] != 1e8 && dist[e[1]] > dist[e[0]] + e[2]){
                dist[e[1]] = dist[e[0]] + e[2];
            }
        }
    }
    bool flag = false;
    for(auto e: edges){
        if(dist[e[0]] != 1e8 && dist[e[1]] > dist[e[0]] + e[2]){
            dist[e[1]] = dist[e[0]] + e[2];
            flag = true;
        }
    }
    if(flag)    return {-1};
    for(auto &e: dist){
        if(e==1e9)  e = -1;
    }
    return dist;
}