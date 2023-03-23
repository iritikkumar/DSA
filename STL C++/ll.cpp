// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        Node *t = head;
        string s;
        while(t!=NULL){
            s.push_back(t->data + '0');
            t = t->next;
        }
        // cout<<s<<endl;
        long long x;
        stringstream geek(s);
        geek >> x;
        x++;
        // cout<<"x="<<x<<endl;
        string s2 = to_string(x);
        // cout<<"string s2="<<s2<<endl;
        t = head;
        for(int i=0;i<s2.length();i++){
            t->data = s2[i]-'0';
            t = t->next;
        }
        return head;
    }
};

// { Driver Code Starts.

int main() 
{ 
    // int t;
    // cin>>t;
    // while(t--)
    // {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    // }
    return 0; 
} 
  // } Driver Code Ends