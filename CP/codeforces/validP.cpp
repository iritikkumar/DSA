#include<bits/stdc++.h>
using namespace std;

bool redundant(string s){
    stack<char> st;
    for(auto& ch : s){
        if(ch!=')'){
            st.push(ch);
        }
        else{
            bool flag = true;
            while(!st.empty() && st.top()!='('){
                if(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/')
                    flag = false;
                st.pop();
            }
            st.pop();
            if(flag==true)
                return true;
        }
    }
    return false;
}

int main(){
    string s1 = "((a+b))";
    string s2 = "(a+(b)/c)";
    string s3 = "(a+b*(c-d))";

    cout<<redundant(s1)<<endl;
    cout<<redundant(s2)<<endl;
    cout<<redundant(s3)<<endl;
    return 0;
}