#include<iostream>
#include<set>
using namespace std;

void print(set<string> &s){
    for(auto str : s){
        cout<< str <<endl;
    }
}

int main(){
    set<string> s;
    s.insert("abc");        //log(n)
    s.insert("kfjkg");
    s.insert("lkj");
    auto it = s.find("abc");    //log(n )
    if(it!=s.end())
        cout<<(*it)<<endl;
    // print(s);
    return 0;
}