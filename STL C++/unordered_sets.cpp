#include<iostream>
#include<unordered_set>
using namespace std;

void print(unordered_set<string> &s){
    for(auto str : s){
        cout<< str <<endl;
    }
}

int main(){
    unordered_set<string> s;
    s.insert("abc");        //O(1)
    s.insert("kfjkg");
    s.insert("lkj");
    // auto it = s.find("abc");    //O(1)
    // if(it!=s.end())
    //     cout<<(*it)<<endl;
    print(s);
    return 0;
}