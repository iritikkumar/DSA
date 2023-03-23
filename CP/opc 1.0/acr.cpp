#include<bits/stdc++.h>
using namespace std;
 
long long int sumOfDigit(long long int n)
{
    if(n==0){
        return 0;
    }
    long long int ans = n%10 + sumOfDigit(n/10);
    return ans;
}
 
int noOfDigit(long int n)
{
    if(n==0){
        return 0;
    }
    int ans = 1+ noOfDigit(n/10);
    return ans;
}
 
 
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        long long int n,m;
        cin>>n>>m;        
        long long int x = n%m;
        long long int y = m-x;
        long long int l = min(x,y);
            if(l==x && n-x>0)
            {
                long long int a = n-l;
            
                if(noOfDigit(sumOfDigit(a))==3)
                {
                    cout<<sumOfDigit(a)<<endl;
                    continue;
                }else if(noOfDigit(sumOfDigit(a))==2)
                {
                    cout<<"0"<<sumOfDigit(a)<<endl;
                    continue;
                }else{
                    cout<<"00"<<sumOfDigit(a)<<endl;
                    continue;
                }             
            }        
            else if(l==y)
            {
                long long int a = n+l;
                if(noOfDigit(sumOfDigit(a))==3)
                {
                    cout<<sumOfDigit(a)<<endl;
                    continue;
                }else if(noOfDigit(sumOfDigit(a))==2)
                {
                    cout<<"0"<<sumOfDigit(a)<<endl;
                    continue;
                }else{
                    cout<<"00"<<sumOfDigit(a)<<endl;
                    continue;
                }            
            }
            
            if(l==x && n-x==0)
            {
                 long long int a = n+y;
                if(noOfDigit(sumOfDigit(a))==3)
                {
                    cout<<sumOfDigit(a)<<endl;
                    continue;
                }else if(noOfDigit(sumOfDigit(a))==2)
                {
                    cout<<"0"<<sumOfDigit(a)<<endl;
                    continue;
                }else{
                    cout<<"00"<<sumOfDigit(a)<<endl;
                    continue;
                }                           
            }
        }
    return 0;
}