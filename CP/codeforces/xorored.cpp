#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int i,n;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)    cin>>a[i];
        int o = a[0];
	    for(i=1;i<n;i++){
	        o |= a[i];
	    }
	    cout<<o<<endl;
	}
	return 0;
}
