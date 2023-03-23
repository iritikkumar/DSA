#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main(){
    pair <int,string> p;               // If not initialized, the first value of the pair gets automatically initialized. 
    p = make_pair(1, "ritik");
    // p = {2, "harsh"};
    pair <int, string> p2 = p;          //copied values of p
    pair <int, string> &p3 = p;         //actual values of p

    cout<<p.first<<" "<<p.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;

    pair <int,vector<int>> pV;   

    vector<int> v={1,2,3,4};
    // vector<int> v(3,8);
    pV = {10, v};     
    for(int i = 0; i< v.size(); i++){
        cout<< pV.first <<" "<< pV.second[i]<<endl;
    }     
    return 0;
}