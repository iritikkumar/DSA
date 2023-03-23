#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,num;
        cin>>n>>m;
        int a = (n/m)*m;
        int b = (n/m + 1)*m;
        if(abs(a-n)<=abs(b-n))
            num = n-abs(a-n);
        else    
            num = n + abs(b-n);
        if(num==0)
            num = m;
        int sum = 0;
        while (num != 0) {
            sum = sum + num % 10;
            num = num / 10;
        }   
        if(sum<10)
            cout<<"00"<<sum<<endl;
        else if(sum>=10 && sum <100)
            cout<<"0"<<sum<<endl;
        else if(sum>=100 && sum<1000)
            cout<<sum<<endl;
        else    
            cout<<"000"<<endl; 
    }       
    return 0;
}