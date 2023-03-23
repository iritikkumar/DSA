#include <iostream>
using namespace std;

int main() {
	int i,j,t,a[3];
	cin>>t;
	while(t--)
	{
	    for(i=0;i<3;i++)
	    {
	        cin>>a[i];
	    }
	    for(j=1;j<3;j++)
	    {
	        for(i=0;i<3-j;i++)
	        {
	            if(a[i]>a[i+1])
                {
                    int temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
	        }
	    }
	    cout<<a[1]<<endl;
	}
	return 0;
}
