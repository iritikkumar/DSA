#include<iostream>
using namespace std;

int main(){
    int i,t;
    cin>>t;
    while(t--){
        int x;
        string s;
        cin>>x;
        if(x==0)
            cout<<"989"<<endl;
        else if(x>0 && x<=9){
            int rep = x+1;
            i=57;
            while(rep--){
                s.push_back(i);
                if(i==48)
                    i=57;
                else
                    i--;
            }
            cout<<s<<endl;
            
        }
        else if(x>=-9 && x<0){
            int rep = abs(x)+1;
            i = 48;
            while(rep--){
                s.push_back(i);
                if(i==57)
                    i=48;
                else    
                    i++;
            }
            cout<<s<<endl;

        }
        else    
            cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}