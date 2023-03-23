#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,n;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	   // for(j=1;j<n;j++)
	   // {
	   //     for(i=0;i<n-j;i++)
	   //     {
	   //         if(arr[i]>arr[i+1])
    //             {
    //                 int temp = arr[i];
    //                 arr[i]=arr[i+1];
    //                 arr[i+1]=temp;
    //             }
	   //     }
	   // }
	   sort(arr,arr+n);
	    cout<<arr[0]+arr[1]<<endl;
	}
	return 0;
}
