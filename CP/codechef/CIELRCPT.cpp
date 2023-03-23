#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int i,p,r,count=0;
        cin>>p;
        for(i=0;p;i++)
        {
            if(p%2048==0)
            {
                count=p/2048;
                break;
            }
            else{
                r=p%2;
                if(r==1)
                    count++;
                p=p/2;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}