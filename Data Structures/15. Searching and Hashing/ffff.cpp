#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a;
	    cin>>n>>a;
	    if(a&1){
	        if(n%2==0)
	            cout<<"Even"<<endl;
	        else
	            cout<<"Odd"<<endl;
	    }
	    else{
	        if(n==1)
	            cout<<"Even"<<endl;
	        else
	            cout<<"Impossible"<<endl;
	    }
	}
	return 0;
}
