// struct Node *temp = root, *temp2 = root;
//     while(1){
//         if(key < temp->data){
//             if(temp->left == NULL){
//                 return root;
//             }
//             else
//                 temp = temp->left;
//         }
//         else if(key > temp->data){
//             if(temp->right == NULL){
//                 return root;
//             }
//             else 
//                 temp = temp->right;
//         }
//         else{
//             break;
//         }
//         if(key != temp->data)
//             temp2 = temp;
//     }
//     if(temp->left == NULL && temp->right == NULL){
//         if(root==temp){
//             free(temp);
//             root = NULL;
//         }
//         else if(key<temp2->data){
//             free(temp);
//             temp2->left = NULL;
//         }
//         else{
//             free(temp);
//             temp2->right = NULL;
//         }

//     }
//     else if(temp->left != NULL && temp->right != NULL){
//         struct Node *t1 = temp->right , *t2 = temp->right;
//         if(t1->left == NULL && t1->right == NULL){
//             temp->right = NULL;
//         }
//         if(t1->left == NULL && t1->right!=NULL){
//             temp->right = t1->right;
//         }
//         while(t1->left != NULL){
//             t1 = t1->left;
//             if(t1->left!=NULL)
//                 t2 = t1;
//         }
//         t2->left = NULL;
//         temp->data = t1->data;
//         free(t1);    
//     }
//     else{
//         if(root==temp){
//             if(temp->left!=NULL)
//                 root = temp->left;
//             else
//                 root = temp->right;
//         }
//         else if(key<temp2->data){
//             if(temp->left!=NULL)
//                 temp2->left = temp->left;
//             else
//                 temp2->left = temp->right;
//         }
//         else{
//             if(temp->left!=NULL)
//                 temp2->right = temp->left;
//             else
//                 temp2->right = temp->right;

//         }
//         free(temp);
//     }
//     return root;