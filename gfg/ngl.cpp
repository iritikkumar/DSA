#include<bits/stdc++.h>
using namespace std;

vector<int> sumDig(vector<int> A){
    int n = A.size();
    int sum = 0;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        sum=0;
        while(A[i]){
            int rem = A[i]%10;
            sum+=rem;
            A[i]/=10;
        }
        v[i] = sum;
    }
    return v;
}

vector<int> solve(vector<int> A){
    int n = A.size();
    stack<int> st;
    vector<int> v = sumDig(A), ans(n,0); 

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && v[st.top()<v[i]]){
            st.pop();
        }
        if(st.empty()){
            ans.push_back(-1);
        }
        else if(v[st.top()==v[i]]){
            ans[i] = max(A[i],A[st.top()]);
        }
        else{
            ans[i] = A[st.top()];
        }
        st.push(i);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n), res;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    res = solve(v);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}