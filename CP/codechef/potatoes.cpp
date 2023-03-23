#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--){
	    int x,y,n,i;
	    cin>>x>>y;
	    for(n=x+y+1;1;n++)
	    {
	        for(i=2;i<n;i++)
	        {
	            if(n%i == 0)
	                break;
	        }
	        if(n==i)
	        {
	            cout<<n-x-y<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
