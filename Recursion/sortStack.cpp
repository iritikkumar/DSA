#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &s, int val)
{
    if (s.size() == 0 || s.top() <= val)
    {
        s.push(val);
        return;
    }
    int l = s.top();
    s.pop();
    insert(s, val);
    s.push(l);
}
void sortStack(stack<int> &s)
{
    if(s.size()==1)
        return;
    int val = s.top();
    s.pop();
    sortStack(s);
    insert(s,val);    
}

int main()
{
    stack<int> s;
    for(int i=0;i<5;i++){
        int c;
        cin>>c;
        s.push(c);
    }
    sortStack(s);
    for(int i=0;i<5;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}