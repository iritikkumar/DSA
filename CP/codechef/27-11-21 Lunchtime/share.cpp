#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    double price;
	    double s,a,b,c;
	    cin>>s>>a>>b>>c;
	    price = s + c/100.0;
	    if(price >= a && price <= b)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}
