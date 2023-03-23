#include<bits/stdc++.h>
using namespace std;

string doubleToStr(double a, int k){
    string ans="";
    int b = (int) a;
    double dec = a-b;
    ans+=to_string(b);
    ans+=".";
    dec *= pow(10,k);
    ans+=to_string((int) dec);
    return ans;
}

int main(){
    double a = 14.36;
    string res = doubleToStr(a,5);
    cout<<res;
    // string s="vijay";
    // reverse(s.begin()+1,s.end()-1);
    // cout<< s;
    return 0;
}