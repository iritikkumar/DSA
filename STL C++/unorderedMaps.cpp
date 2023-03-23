#include<iostream>
#include<unordered_map>
#include<vector>
#include<utility>
using namespace std;

// Maps and Onorderes Maps differ in:
// 1. Inbuilt implementation (hash table)
// 2. Time complexity
// 3. Valid keys datatype

int main(){
    unordered_map<int, string> m;
    m[1] = "Ritik";     //O(1)
    m[10] = "Harsh";
    m[3] = "Vijay";
    m.insert({-2, "Shorya"});   // a pair is inserted
    m[5];                   // empty string will get stored
    for(auto &p: m)                                         // key-value pair gets stored in random order
        cout<<p.first<<" "<<p.second<<endl;
    auto it = m.find(54);   // O(1)
    if(it==m.end())
        cout<<"No Value"<<endl;
    else
        cout<<(*it).first<<" "<<(*it).second<<endl;
    if(it!=m.end())
        m.erase(it);        // log(1)
    return 0;
}