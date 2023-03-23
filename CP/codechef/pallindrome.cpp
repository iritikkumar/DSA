#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,nTemp=0,r,m=0;
	    cin>>n;
	    nTemp=n;
	    while(nTemp)
	    {
	        r=nTemp%10;
	        m=10*m+r;
	        nTemp/=10;
	    }
	    if(n==m)
	        cout<<"wins"<<endl;
	    else
	        cout<<"loses"<<endl;
	}
	return 0;
}
