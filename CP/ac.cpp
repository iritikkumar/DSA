#include<iostream>
using namespace std;

int main(){
    int x=5;
    int y=15;
    x=x&y;
    y=x|y;
    x=x|y;
    cout<<x<<y;

    return 0;
}