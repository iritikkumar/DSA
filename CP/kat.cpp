#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		ll i,n,evenP=0,oddP=0;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(log2(a[i])%2==0){
				evenP++;
			}
			else
				oddP++;
		}
		ll a = pow(2,evenP)%M;
		ll b = pow(2,oddP-1)%M
		ll res = (a + b + a*b)%M;  
		cout<<res<<endl;
	}
}