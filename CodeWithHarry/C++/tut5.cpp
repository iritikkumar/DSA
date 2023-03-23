#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,k;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n/2;i++)
    {
        k=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=k;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
