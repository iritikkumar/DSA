#include<iostream>
using namespace std;

// int gcd(int a, int b){
//     int i,hcf;
//     for(i=1;i<=a||i<=b;i++)
//     {
//         if(a%i==0&&b%i==0)
//             hcf=i;
//     }
//     return hcf;
// }

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

void solve(){
    int a,b;
    cin>>a>>b;
    long long prod = a*b;
    int g = gcd(a,b);
    long long lcm = prod/g;
    cout<<g<<" "<<lcm<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        // int n,i;
        // cin>>n;
        // int a[n];
        // for(i=0;i<n;i++)
        //     cin>>a[i];
        // int g = gcd(a[0],a[1]);
        // for(i=2;i<n;i++)
        //     g = gcd(g, a[i]);
        // for(i=0;i<n;i++)
        //     cout<< a[i]/g <<" ";
        // cout<<"\n";
        solve();
    }
    return 0;
}