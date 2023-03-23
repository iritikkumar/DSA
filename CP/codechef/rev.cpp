#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    int r,s=0;
	    cin>>n;
	    while(n)
	    {
	        r=n%10;
	        s=10*s+r;
	        n=n/10;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
