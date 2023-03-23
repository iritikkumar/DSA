#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,k,i,j,count1,count2;
    int d,e;
    cin>>n>>q;
    int *a[n];
    for(count1=0;count1<n;count1++)
    {
        cin>>k;
        a[count1] = (int*) calloc(k,4);
        
        for(count2=0;count2<k;count2++)
        {
            cin>> *(a[count1] + count2);
        }        
            
    }
    for(int count=0;count<q;count++)
    {
        cin>>i>>j;
        cout<<*(a[i]+j)<<endl;
    }
    // for(int count=0;count<q;count++)
    // {
    // }
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}