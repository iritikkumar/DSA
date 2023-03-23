#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1, x2, p1, p2;
        long long n1,n2;
        cin>>x1>>p1>>x2>>p2;
        n1 = x1;
        n2 = x2;
        while(p1--)
            n1 = n1*10;
        while(p2--)
            n2 = n2*10;
        if(n1==n2)
            cout<<"="<<endl;
        else if(n1>n2)
            cout<<">"<<endl;
            else
            cout<<"<"<<endl;
    }
    return 0;
}