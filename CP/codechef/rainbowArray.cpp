#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int i,n,count=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    for(i=0;i<n/2;i++)
	    {
	        if(i==0 && (a[i] == a[n-i-1]))
	            count++;
	        if((a[i] == a[n-i-1]) && (a[i]==a[i-1] || a[i]==a[i-1]+1))
	            count++;
	    }
	    if(i==n/2 && n%2!=0 && (a[i]==a[i-1] || a[i]==a[i-1]+1)){
	        count++;
	        
	        
	    if(n%2==0){
    	    if(count == n/2)
    	        cout<<"yes\n";
    	    else
    	        cout<<"no\n";
	    }
	    else{
    	    if(count == (n+1)/2)
    	        cout<<"yes\n";
    	    else
    	        cout<<"no\n";
    	    }
	    }
	    
	}
	return 0;
}
