#include <iostream>
using namespace std;

int main() {
	int t,n,r;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>n;
	    while(n)
	    {
	        r=n%10;
	        if(r==4)
	            count++;
	        n=n/10;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
