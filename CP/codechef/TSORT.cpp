#include <iostream>
using namespace std;

int main() {
    int i,j,t,temp;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(j=1;j<t;j++)
    {
        for(i=0;i<t-j;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
	return 0;
}
