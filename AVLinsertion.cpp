#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node *left , *right;
    int ht;
    // node(int data){
    //     this->val = data;
    //     left = right = NULL;
    //     ht = 1;
    // }
};

// root* rightRotate(root* y){
//     root *x = y->left;
//     root *t2 = x->right;
//     // performing rotation
//     x->right = y;
//     y->left = t2;
//     // updating hts
//     y->ht = max(y->left->ht, y->right->ht) + 1;
//     x->ht = max(x->left->ht, x->right->ht) + 1;

//     return x;
// }

// root* leftRotation(root *x){
//     root *y = x->right;
//     root *t2 = y->left;

//     y->left = x;
//     x->right = t2;
    
//     x->ht = max(x->left->ht, x->right->ht) + 1;
//     y->ht = max(y->left->ht, y->right->ht) + 1;

//     return y;

// }



// root* insert(root *root, int val){
//     if(root == NULL){
//         return (new root(val));
//     }
//     if(data < root->val){
//         root->left = insert(root->left, val);
//     }
//     else if (val > root->val)
//     {
//         root->right = insert(root->right, val);
//     }
//     else{
//         return root;
//     }
    
//     root->ht = 1 + max(root->left->ht, root->right->ht);

//     int balance = root->left->ht - root->right->ht;

//     // 4 cases

//     // left left class
//     // right rotation
//     if(balance > 1 && data < root->left->val){
//         return rightRotate(root);
//     }

//     // right right class
//     //left rotation
//     if(balance < -1 && val > root->right->val){
//         return leftRotation(root);
//     }

//     // left right case
//     if(balance > 1 && val > root->left->val){
//         root->left = leftRotation(root->left);
//         return rightRotate(root);
//     }

//     // right left case
//     if(balance < -1 && data < root->right->val){
//         root->right = rightRotate(root->right);
//         return leftRotation(root);
//     }
//     return root;
// }




int max(int a, int b);  
  
// A utility function to get the  
// ht of the tree  
int ht(node *N)  
{  
    if (N == NULL)  
        return 0;  
    return N->ht;  
}  
  
// A utility function to get maximum 
// of two integers  
int max(int a, int b)  
{  
    return (a > b)? a : b;  
}  
  
/* Helper function that allocates a  
   new root with the given val and  
   NULL left and right pointers. */
node* newnode(int val)  
{  
    node* root = new node(); 
    root->val = val;  
    root->left = NULL;  
    root->right = NULL;  
    root->ht = 1; // new root is initially 
                      // added at leaf  
    return(root);  
}  
  
// A utility function to right 
// rotate subtree rooted with y  
// See the diagram given above.  
node *rightRotate(node *y)  
{  
    node *x = y->left;  
    node *T2 = x->right;  
  
    // Perform rotation  
    x->right = y;  
    y->left = T2;  
  
    // Update hts  
    y->ht = max(ht(y->left), 
                    ht(y->right)) + 1;  
    x->ht = max(ht(x->left), 
                    ht(x->right)) + 1;  
  
    // Return new root  
    return x;  
}  
  
// A utility function to left  
// rotate subtree rooted with x  
// See the diagram given above.  
node *leftRotate(node *x)  
{  
    node *y = x->right;  
    node *T2 = y->left;  
  
    // Perform rotation  
    y->left = x;  
    x->right = T2;  
  
    // Update hts  
    x->ht = max(ht(x->left),     
                    ht(x->right)) + 1;  
    y->ht = max(ht(y->left),  
                    ht(y->right)) + 1;  
  
    // Return new root  
    return y;  
}  
  
// Get Balance factor of root N  
int getBalance(node *N)  
{  
    if (N == NULL)  
        return 0;  
    return ht(N->left) - ht(N->right);  
}  
  
// Recursive function to insert a val 
// in the subtree rooted with root and 
// returns the new root of the subtree.  
node* insert(node* root, int val)  
{  
    /* 1. Perform the normal BST insertion */
    if (root == NULL)  
        return(newnode(val));  
  
    if (val < root->val)  
        root->left = insert(root->left, val);  
    else if (val > root->val)  
        root->right = insert(root->right, val);  
    else // Equal vals are not allowed in BST  
        return root;  
  
    /* 2. Update ht of this ancestor root */
    root->ht = 1 + max(ht(root->left),  
                        ht(root->right));  
  
    /* 3. Get the balance factor of this ancestor  
        root to check whether this root became  
        unbalanced */
    int balance = getBalance(root);  
  
    // If this root becomes unbalanced, then  
    // there are 4 cases  
  
    // Left Left Case  
    if (balance > 1 && val < root->left->val)  
        return rightRotate(root);  
  
    // Right Right Case  
    if (balance < -1 && val > root->right->val)  
        return leftRotate(root);  
  
    // Left Right Case  
    if (balance > 1 && val > root->left->val)  
    {  
        root->left = leftRotate(root->left);  
        return rightRotate(root);  
    }  
  
    // Right Left Case  
    if (balance < -1 && val < root->right->val)  
    {  
        root->right = rightRotate(root->right);  
        return leftRotate(root);  
    }  
  
    /* return the (unchanged) root pointer */
    return root;  
}  