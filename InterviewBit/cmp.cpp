#include<bits/stdc++.h>
using namespace std;
int cmp(string a, string b)
{   
    if(a==b)
        return true;
    int l = min(a.length(),b.length());
    for(int i=0;i<l;i++){
        if(a[i]<b[i]){
            return false;
        }
        else if(a[i]>b[i])
            return true;
    }

    if(a.length()==b.length())
        return true;
    
    else if(a.length()>b.length()){
        if(a.substr(0,b.length())>=b )
        {
            if(a[l]>b[0])
                return true;
            else
                return false;
        }
    }
    else{
        if(b.substr(0,a.length())>=a){
            if(b[l]>a[0])
                return false;
            else
                return true;
        }
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<cmp(s1,s2);
    return 0;
}