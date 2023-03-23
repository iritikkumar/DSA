// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 	    int n,k,p;
// 	    scanf("%d%d",&n,&k);
// 	    for(p=1;1;p++)
// 	    {
// 	        if((p*k)%n==0)
// 	            break;
// 	    }
// 	    printf("%d\n",p);
// 	}
// 	return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k,p;
	    int hcf = gcd(n, k);
	    scanf("%d%d",&n,&k);
	   cout<<hcf<<endl;
	//    if(n>k && n%k != 0)
	//     //    cout<<boost::math::lcm(n,k)<<endl;
	//    else 
    //    if(n>k && n%k == 0)
	//        cout<<n/k<<endl;
	//    else if(n<k && k%n != 0)
	//         cout<<n/hcf<<endl;
	//    else
	//         cout<<1<<endl;
	        
	}
	return 0;
}
