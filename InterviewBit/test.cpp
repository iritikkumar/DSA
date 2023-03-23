#include<bits/stdc++.h>
using namespace std;
long long solve(int& A, long long s){
    if(s%A==0)  return s;
    return min(solve(A,s*10),solve(A,s*10+1));
}

string multiple(int A) {
    long long x = solve(A,1);
    return  to_string(x);
}

int main(){
    cout<<multiple(2)<<endl;
    return 0;
}