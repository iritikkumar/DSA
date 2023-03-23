#include <iostream>
using namespace std;

int main() {
	
	int t,n;
	cin>>t;
	while(t--)
	{
	    long double f=1;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        f=f*i;
	    }
	    cout<<(int)f<<endl;
	}
	return 0;
}
