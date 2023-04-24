#include<bits/stdc++.h>
using namespace std;

void shortest_distance(vector<vector<int>>&matrix){
    int n = matrix.size(); 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                matrix[i][j]==0;
            }
            else if(matrix[i][j]==-1){
                matrix[i][j] = 1e9;
            }
        }
    }
    for(int via=0;via<n;via++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = min(matrix[i][via] + matrix[via][j], matrix[i][j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==1e9){
                matrix[i][j] = -1;
            }
        }
    }
    //if matrix[i][i] becomes negative then we can say negative cycle is present
    return;
}

int main(){
    
    return 0;
}