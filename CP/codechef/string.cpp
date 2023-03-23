// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s = "CLICK 1";
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int c = s.at(6) - 48;
//     cout<<a[c-1]<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
	int i,n,k,count=0;
	cin>>n>>k;
	int a[n]={0};
	while(k--){
	    string s;
	    cin>>s;
	    if(s == "CLOSEALL")
	        for(i=0;i<n;i++)
	            a[i]=0;
	    else{
	        int c = s.at(6) - 48;
	        if(a[c - 1] == 0)
	            a[c - 1] == 1;
	        else
	            a[c - 1] == 0;
	    }
	}
	for(i=0;i<n;i++)
	    if(a[i]==1)
	        count++;
	cout<<count<<endl;
	return 0;
}
