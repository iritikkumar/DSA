#include<iostream>
using namespace std;
struct node{
    int item;
    struct node *next;
};
bool loop(struct node *head){
    struct node *t = head;
    struct node *current = head;


    while(current != t){
        current = current->next->next;
        t = t->next;
    if(t->next == NULL)
        return false;
    }
    return true;
}

int main(){
    
    return 0;
}
