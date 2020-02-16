#include<bits/stdc++.h>
using namespace std;

class node{
    public: 
    int data;
    node *left, *right;
    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
class Tree{
    public:
    node *root = NULL;
    void insertion(node *head, int data){
        if(root){
            if(head->data > data){
                // left
                if(head->left){
                    insertion(head->left, data);
                }
                else{
                    head->left = new node(data);
                }
            }
            else if(head->data < data){
                if(head->right){
                    insertion(head->right, data);
                }
                else{
                    head->right = new node(data);
                }
            }
        }
        else{
            root = new node(data);
        }
        return ;
    }
    void print(node *head){
        if(head){
            print(head->left);
            cout<<" "<<head->data<<" ";
            print(head->right);
        }
    }
};
int main(int argc, char const *argv[])
{
    Tree tree;
    tree.insertion(tree.root, 5);
    tree.insertion(tree.root, 3);
    tree.insertion(tree.root, 8);
    tree.insertion(tree.root, 1);
    tree.insertion(tree.root, 2);
    tree.insertion(tree.root, 7);
    tree.insertion(tree.root, 10);
    tree.print(tree.root);
    return 0;
}

