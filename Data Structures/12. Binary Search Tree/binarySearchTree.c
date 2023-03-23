#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    struct node *left, *right;
    int item;
};
void insert(struct node **r, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    n->left = n->right = NULL;
    if (*r == NULL)
        *r = n;
    else
    {
        struct node *temp = *r, *temp2 = *r;
        while (temp != NULL)
        {
            if (data < temp->item)
            {
                temp = temp->left;
            }
            else if (data > temp->item)
            {
                temp = temp->right;
            }
            else
            {
                printf("Duplicate item not allowed\n");
                break;
            }
            if (temp != NULL)
            
            {
                temp2 = temp;
            }
        }
        if (temp2->item > data && temp == NULL)
        {
            temp2->left = n;
        }
        else if (temp2->item < data && temp == NULL)
        {
            temp2->right = n;
        }
        // struct node *ptr = *r;
        // while (1)
        // {
        //     if (data < ptr->item)
        //     {
        //         if (ptr->left == NULL)
        //         {
        //             ptr->left = n;
        //             break;
        //         }
        //         else
        //             ptr = ptr->left;
        //     }
        //     else if (data > ptr->item)
        //     {
        //         if (ptr->right == NULL)
        //         {
        //             ptr->right = n;
        //             break;
        //         }
        //         else
        //             ptr = ptr->right;
        //     }
        //     else
        //     {
        //         free(n);
        //         break;
        //     }
        // }
    }
}

void delete(struct node **r, int data){
    struct node *temp = *r, *temp2 = *r;
    while(1){
        if(data < temp->item){
            if(temp->left == NULL){
                printf("\nData not found\n");
                return;
            }
            else
                temp = temp->left;
        }
        else if(data > temp->item){
            if(temp->right == NULL){
                printf("\nData not found\n");
                return;
            }
            else 
                temp = temp->right;
        }
        else{
            break;
        }
        if(data != temp->item)
            temp2 = temp;
    }
    if(temp->left == NULL && temp->right == NULL){
        if(*r==temp){
            free(temp);
            *r = NULL;
        }
        else if(data<temp2->item){
            free(temp);
            temp2->left = NULL;
        }
        else{
            free(temp);
            temp2->right = NULL;
        }

    }
    else if(temp->left != NULL && temp->right != NULL){
        struct node *t1 = temp->right , *t2 = temp->right;
        if(t1->left == NULL && t1->right == NULL){
            temp->right = NULL;
        }
        if(t1->left == NULL && t1->right!=NULL){
            temp->right = t1->right;
        }
        while(t1->left != NULL){
            t1 = t1->left;
            if(t1->left!=NULL)
                t2 = t1;
        }
        t2->left = NULL;
        temp->item = t1->item;
        free(t1);    
    }
    else{
        if(*r==temp){
            if(temp->left!=NULL)
                *r = temp->left;
            else
                *r = temp->right;
        }
        else if(data<temp2->item){
            if(temp->left!=NULL)
                temp2->left = temp->left;
            else
                temp2->left = temp->right;
        }
        else{
            if(temp->left!=NULL)
                temp2->right = temp->left;
            else
                temp2->right = temp->right;

        }
        free(temp);
    }
}
void inorder(struct node *root){
    if(root){
        inorder(root->left);
        printf("%d ",root->item);
        inorder(root->right);
    }

}
void preorder(struct node *root){
    if(root){
        printf("%d ",root->item);
        preorder(root->left);
        preorder(root->right);
    }

}
void postorder(struct node *root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->item);
    }

}
void levelorder(struct node *root){
    struct node *temp = root, *temp2 = root;
    if(root==NULL)
        printf("Empty Tree\n");
    else{
        printf("%d ",root->item);
        while(temp!=NULL || temp2!=NULL){
            if(temp->left!=NULL && temp->right!=NULL ){
                printf("%d ",temp->left->item);
                printf("%d ",temp->right->item);
                temp = temp->left;
                temp2 = temp2->right;
            }
        }
    }
}
int menu()
{
    int choice;
    printf("\n1. Insert\n");
    printf("2. Delete\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}
int main()
{
    int x,y;
    struct node *root = NULL;
    insert(&root, 50);
    insert(&root, 30);
    insert(&root, 70);
    insert(&root, 20);
    insert(&root, 40);
    insert(&root, 90);
    insert(&root, 35);
    inorder(root);
    printf("\n");
    levelorder(root);
    // while (1)
    // {
    //     system("cls");
    //     inorder(root);
    //     switch (menu())
    //     {
    //     case 1:
    //         printf("Enter the value you want to insert: ");
    //         scanf("%d", &x);
    //         insert(&root,x);
    //         break;
    //     case 2:
    //         printf("Enter the value you want to delete: ");
    //         scanf("%d", &x);
    //         delete(&root,x);
    //         getch();
    //         break;
    //     case 3:
    //         exit(0);
    //     default:
    //         printf("Invalid Choice...Retry...");
    //     }
    // }
    return 0;
}
