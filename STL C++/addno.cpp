// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
public:
    struct Node *reverseList(struct Node *head)
    {
        // struct Node *temp = head;
        if (head == NULL || head->next == NULL)
            return head;
        else
        {

            struct Node *current = head->next;
            struct Node *t = head->next;
            head->next = NULL;
            while (t->next != NULL)
            {
                t = t->next;
                current->next = head;
                head = current;
                current = t;
            }
            t->next = head;
            head = t;
        }
        return head;
    }
    // Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        first = reverseList(first);
        second = reverseList(second);
        struct Node *head = NULL;
        struct Node *t3 = NULL;
        struct Node *t1 = first;
        struct Node *t2 = second;
        int carry = 0;
        int t1data, t2data;
        while (t1 != NULL || t2 != NULL)
        {
            if(t1 != NULL){
                t1data = t1->data;
            }
            else{
                t1data = 0;
            }
            if(t2 != NULL){
                t2data = t2->data;
            }
            else{
                t2data = 0;
            }

            if (t1data + t2data + carry < 10)
            {
                if (head == NULL)
                {
                    head = new Node(t1data + t2data + carry);
                    t3 = head;
                }
                else
                {
                    t3->next = new Node(t1data + t2data + carry);
                    t3 = t3->next;
                }
                carry = 0;
            }
            else
            {
                if (head == NULL)
                {
                    head = new Node(t1data + t2data + carry - 10);
                    t3 = head;
                }
                else
                {
                    t3->next = new Node(t1data + t2data + carry - 10);
                    t3 = t3->next;
                }
                carry = 1;
            }
            if(t1!=NULL)
                t1 = t1->next;
            if(t2!=NULL)
                t2 = t2->next;
        }
        if (carry == 1)
        {
            t3->next = new Node(1);
        }
        head = reverseList(head);
        return head;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends