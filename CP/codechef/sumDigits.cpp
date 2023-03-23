#include <iostream>
using namespace std;

int main() {
    int T, sum,i;
    int n;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>n;
        sum=0;
        while(n){
            sum=sum+(n%10);
            n=n/10;
        }
        cout<<sum<<endl;
        T--;
    }
	// your code goes here
	return 0;
}
