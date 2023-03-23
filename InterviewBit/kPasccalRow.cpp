#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int a){
    vector<int> ans;
    if(a==0){
        ans.push_back(1);
        return ans;
    }
    vector<int> v = solve(a-1);
    ans.push_back(1);
    for(int i=1;i<=a-1;i++){
        ans.push_back(v[i-1]+v[i]);
    }
    ans.push_back(1);
    return ans;
}

vector<int> getRow(int a) {
    vector<int> v = solve(a);
    return v;
}

int main(){
    vector<int> v = getRow(8);
    for(auto val:v) 
        cout<<val<<" ";
    cout<<endl;
    return 0;
}
