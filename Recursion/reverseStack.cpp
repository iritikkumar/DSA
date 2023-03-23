#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int> &s, int val){
    if(s.size()==0){
        s.push(val);
        return;
    }
    int l = s.top();
    s.pop();
    insert(s,val);
    s.push(l);
}
void reverseStack(stack<int> &s){
    if(s.size()==1)
        return;
    int val = s.top();
    s.pop();
    reverseStack(s);
    insert(s,val);
}
int main(){
    stack<int> s;
    for(int i=0;i<5;i++){
        int c;
        cin>>c;
        s.push(c);
    }
    reverseStack(s);
    for(int i=0;i<5;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}