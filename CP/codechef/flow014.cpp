#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int h,ts,grade;
    	float cc;
        cin>>h>>cc>>ts;
        if(h>50 && cc<0.7 && ts>5600)
            grade=10;
        else
            if(h>50 && cc<0.7)
                grade=9;
            else
                if(cc<0.7 && ts>5600)
                    grade=8;
                else
                    if(h>50 && ts>5600)
                        grade=7;
                    else
                        if(h>50 || cc<0.7 || ts>5600)
                            grade=6;
                        else
                            grade=5;
        cout<<grade<<endl;                   
        
    }	
	return 0;
}
