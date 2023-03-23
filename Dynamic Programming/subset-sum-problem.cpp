#include<iostream>
using namespace std;

int subsetSum(int a[], int s, int n){
    int t[n+1][s+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<s+1;j++){
            if(i==0)
                t[i][j]=false;
            if(j==0)    
                t[i][j]=true;
        }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<s+1;j++){
            if(a[i-1]<=j){
                t[i][j] = t[i-1][j-a[i-1]] | t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][s];
}
int equalSumPartition(int a[], int n){
    int sum = 0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    if(sum%2!=0)
        return false;
    return subsetSum(a,sum/2,n);
}
int countSubsetSum(int a[], int s, int n){
    int t[n+1][s+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<s+1;j++){
            if(i==0)
                t[i][j]=0;
            if(j==0)    
                t[i][j]=1;
        }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<s+1;j++){
            if(a[i-1]<=j){
                t[i][j] = t[i-1][j-a[i-1]] + t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][s];
}
int countSubsetsWithGivenDifference(int a[], int diff, int n){
    int sum = 0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    int s1 = (sum + diff)/2;
    return countSubsetSum(a,s1,n);

}
int main(){
    int val[]={2,3,7,8,10};
    cout<<subsetSum(val,13,5)<<endl;
    int arr[]={1,5,11,5};
    cout<<equalSumPartition(arr,4)<<endl;
    int arr1[]={2,3,5,6,8,10};
    cout<<countSubsetSum(arr1,10,6)<<endl;
    int arr2[]={1,1,2,3};
    cout<<countSubsetsWithGivenDifference(arr2,1,4)<<endl;;
    return 0;
}