#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &a,vector<vector<int>> &q) {
  int n=a.size();
  vector<vector<int>> b(n,vector<int>(32));
  
  for(int i=0;i<n;i++) {
    for(int j=0;j<32;j++) {
      if(a[i]&(1<<j)) b[i][j]++;
      if(i>0) b[i][j]+=b[i-1][j];
    }
  }
  
  // for(int j=0;j<5;j++) {
  //   for(int i=0;i<n;i++) cout<<b[i][j]<<" ";
  //   cout<<"\n";
  // }
  
  vector<int> res;
  for(int i=0;i<q.size();i++) {
    int l=q[i][0],r=q[i][1],ans=0;
    for(int j=0;j<32;j++) {
      int cnt=b[r][j];
      if(l-1>=0) cnt-=b[l-1][j];
      
      ans+=min(cnt,r-l+1-cnt);
    }
    
    res.push_back(ans);
  }
  
  return res;
}
int main() 
{
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int q;
    cin>>q;
    vector<vector<int>> queries(q,vector<int>(2));
    for(int i=0;i<q;i++) cin>>queries[i][0]>>queries[i][1];
    vector<int> o=solve(v,queries);
    for(auto x:o) cout<<x<<" ";cout<<"\n";
  }
    return 0;
}