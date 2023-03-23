#include<iostream>
#include<map>
#include<vector>
#include<utility>
using namespace std;

int main(){
    map<int, string> m;
    m[1] = "Ritik";
    m[10] = "Harsh";
    m[3] = "Vijay";
    m.insert({-2, "Shorya"});   // a pair is inserted
    m[5];                   // empty string will get stored
    for(auto &p: m)
        cout<<p.first<<" "<<p.second<<endl;
    auto it = m.find(54);
    if(it==m.end())
        cout<<"No Value"<<endl;
    else
        cout<<(*it).first<<" "<<(*it).second<<endl;
    return 0;
}