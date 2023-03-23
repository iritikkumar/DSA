#include<bits/stdc++.h>
using namespace std;

void allSub(string ip, string op, vector<string> &v){
    if(ip.length()==0){
        v.push_back(op);
        return;
    }
    string ip1;
    string ch = ip.substr(0,1);
    ip1 = ip.substr(1,ip.length()-1);
    allSub(ip1,op+ch,v);
    allSub(ip1,op,v);
}

int main(){
    vector<string> v;
    string ip = "abcd", op = "";
    allSub(ip,op,v);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl<<v.size()<<endl;
    return 0;
}