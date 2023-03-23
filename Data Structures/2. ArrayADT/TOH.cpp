#include<iostream>
using namespace std;

void TOH(int n, char beg, char aux, char end){
    if(n>0){
        TOH(n-1,beg,end,aux);
        cout<<beg<<"->"<<end<<endl;
        TOH(n-1,aux,beg,end);
    }
}

int main(){
    int n;
    cin>>n;
    TOH(n,'A','B','C');
    return 0;
}