#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float basic,hra,da;
	    cin>>basic;
	    if(basic<1500)
	    {
	        cout<<fixed << setprecision(2)<<(2*basic)<<endl;
	    }
	    else{
	        cout<<fixed << setprecision(2)<<(basic+500.0+0.98*basic)<<endl;
	    }
	}
	return 0;
}
