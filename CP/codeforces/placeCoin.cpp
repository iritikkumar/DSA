#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        if(l==0||l==3){
            cout<<"Divyansh"<<endl;
        }
        else if(l<=2){
            cout<<"Karim"<<endl;
        }
        else if((l-1)%2==0)
            cout<<"Divyansh"<<endl;
        else{    
            cout<<"Karim"<<endl;
        }
    }
    return 0;
}