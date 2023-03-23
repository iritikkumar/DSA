#include <iostream>
using namespace std;
int sum(int D, int N)
{
    int i,s;
    while(D--)
    {
        s=0;
        for(i=1;i<=N;i++)
        {
            s=s+i;
        }
        N=s;
    }    
    return s;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int d,n,k;
	    cin>>d>>n;
	    k=sum(d,n);
	    cout<<k<<endl;
	}
	return 0;
}
