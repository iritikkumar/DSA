#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    if(abs(m-n) == k)
	        cout<<"0"<<endl;
	    else if(abs(m-n) > k)
	        cout<<abs(m-n) - k<<endl;
	    else 
	   // if(abs(m-n) < k)
	    {
	        if((k-abs(m-n))%2==0)
	            cout<<"0"<<endl;
	        else
	            cout<<"1"<<endl;
	    }
	        
    }
	return 0;
}