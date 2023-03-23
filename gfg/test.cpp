#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node *left, *right;
    Node(int v){
        val = v;
        left = NULL;
        right = NULL;
    }
};

int height(Node* root, int& ans){
    if(!root)   return 0;

    int left = height(root->left, ans);
    int right = height(root->right, ans);

    ans = max(ans, 1 + left + right);
    return 1+max(left,right);
}

int solve(Node *root){
    int ans = -1e9;
    int h = height(root, ans);
    return ans;
}


int main(){
    
    return 0;
}