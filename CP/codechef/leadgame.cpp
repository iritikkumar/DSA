#include <iostream>
using namespace std;

int main() {
	int n,i;
	cin>>n;
    int s,s1=0,t,t1=0,maxlead=0,d=0,winner;
    for(i=0;i<n;i++)
    {
        cin>>s>>t;
        s1+=s;
        t1+=t;
        d=abs(s1-t1);
        if(maxlead<d)
        {
            maxlead=d;
            if(s1>t1)
                winner=1;
            else
                winner=2;
                
        }

    }
        cout<<winner<<" "<<maxlead<<endl;
	return 0;
}
