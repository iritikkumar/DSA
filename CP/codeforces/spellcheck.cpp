#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s, str = "Timur";
        cin>>s;
        sort(s.begin(), s.end());
        sort(str.begin(), str.end());

        if(s==str)  cout<<"YES"<<endl;
        else   cout<<"NO"<<endl;
        
    }
    return 0;
}