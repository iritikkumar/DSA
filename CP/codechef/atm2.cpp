#include <iostream>
using namespace std;

int main() {
	int t;

	cin>>t;
	while(t--){
	    int i,n,k;
	    cin>>n>>k;
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    for(i=0;i<n;i++){
	        if(a[i]<=k && k > 0){
	            k = k - a[i];
	            b[i] = 1;
	        }
	        else
	            b[i] = 0;
	    }    
	    for(i=0;i<n;i++)
	        cout<<b[i];
	    cout<<endl;
	}
	return 0;
}
