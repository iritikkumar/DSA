#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long ans = 0;
        int i=0, j=n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                ans+=i;
            }
            else{
                ans+=n-i-1;
            }
        }

        int k = 0;
        while(i<=j){
            bool flag = false;
            if(i<n/2){
                if(s[i]=='L'){
                    s[i] = 'R';
                    ans -= i;
                    ans += n-i-1;
                    i++;
                    cout<<ans<<" ";
                    k++;
                }
                else {
                    i++;
                }   
            }
            if(j>=n/2){
                if(s[j]=='R'){
                    s[j] = 'L';
                    ans -= n-j-1;
                    ans += j;
                    cout<<ans<<" ";
                    j--;
                    k++;
                }
                else {
                    j--;
                }   
            }
        }
        while(k<n){
            cout<<ans<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}