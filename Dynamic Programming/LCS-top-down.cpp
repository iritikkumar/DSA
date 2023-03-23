#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int lcs(string x, string y, int n, int m){
    int t[n+1][m+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<m+1;j++)
            if(i==0||j==0)
                t[i][j]=0;
    for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++){
            if(x[i-1]==y[j-1])
                t[i][j] = 1+t[i-1][j-1];
            else
                t[i][j] = max(t[i-1][j],t[i][j-1]);
        }
    return t[n][m];
}

int lcSubstring(string x, string y, int n, int m){
    int ans=0;
    int t[n+1][m+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<m+1;j++)
            if(i==0||j==0)
                t[i][j]=0;
    for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++){
            if(x[i-1]==y[j-1]){
                t[i][j] = 1+t[i-1][j-1];
                ans=max(ans,t[i][j]);
            }
            else
                t[i][j] = 0;
        }
    return ans; 
}

string printLCS(string x, string y, int n, int m){
    string ans;
    int t[n+1][m+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<m+1;j++)
            if(i==0||j==0)
                t[i][j]=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(x[i-1]==y[j-1])
                t[i][j] = 1+t[i-1][j-1];
            else
                t[i][j] = max(t[i-1][j],t[i][j-1]);
        }
    }
    
    for(int i=n,j=m;i>=0 && j>=0;){
        if(x[i-1]==y[j-1]){
            ans+=x[i-1];
            i--;
            j--;
        }
        else if(t[i-1][j]>t[i][j-1])
            i--;
        else
            j--;

    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int shortestCommonSupersequence(string a,string b, int n, int m){
    return n+m-lcs(a,b,n,m);
}
string printSCS(string x, string y, int n, int m){
    string ans;
    int t[n+1][m+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<m+1;j++)
            if(i==0||j==0)
                t[i][j]=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(x[i-1]==y[j-1])
                t[i][j] = 1+t[i-1][j-1];
            else
                t[i][j] = max(t[i-1][j],t[i][j-1]);
        }
    }
    int i,j;
    for(i=n,j=m;i>=0 && j>=0;){
        if(x[i-1]==y[j-1]){
            ans+=x[i-1];
            i--;
            j--;
        }
        else if(t[i-1][j]>t[i][j-1]){
            ans+=x[i-1];
            i--;
        }
        else{
            ans+=y[j-1];
            j--;
        }

    }
    while(i>0){
        ans.push_back(x[i-1]);
        i--;
    }
    while(j>0){
        ans.push_back(y[j-1]);
        j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string x,y;
    cout<<lcSubstring(x,y,x.length(),y.length())<<" "<< x.length()<<endl;
    return 0;
}