#include<iostream>
#include<utility>
#include<vector>
using namespace std;

// void printV(vector<pair<int,string>> v){
void printV(vector<int> v){
    cout<<v.size()<<endl;
    for(auto &value: v){
        cout<<value<<" ";
        // cout<< value.first <<" "<<value.second<<endl;
    }
    cout<<endl;
}
int main(){
    vector<int> v(5,30);
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(25);
    // v = {1,2,3};
    vector<int> v2 = v;
    //----------------------Vector of Pair-------------------------------
    // vector<pair<int,string>> vP;
    // for(int i=0;i<3;i++){
    //     int x;
    //     string y;
    //     cin>>x>>y;
    //     vP.push_back({x,y});
    // }
    //----------------------Vector of Vector-------------------------------
    vector<vector<int>> vV;
    for(int i=0;i<3;i++){
        vector<int> temp;
        for(int j=0;j<2;j++)
            temp.push_back(i+j);
        vV.push_back(temp);
    }
    for(int i=0;i<3;i++)
        printV(vV[i]);
    return 0;
}