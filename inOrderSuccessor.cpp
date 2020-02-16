#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left, *right, *parent;
    node(int data, node *ptr){
        this->data = data;
        left = right = NULL;
        parent = ptr;
    }
};
node* findnode(node *root, int data){
    queue<node*> Q;
    Q.push(root);
    while(Q.size()){
        node *temp = Q.front();
        Q.pop();
    }
}
node* findinordersucc(node *root, int data){
    node *target = findnode(root, data);
    if(target->right){
        return leftmost(target->right);
    }
    else{
        node *curr = target->parent;
        while(curr){
            if(target == curr->left)
                return curr;
            target = curr;
            curr = curr->parent;
        }
    }
    return NULL;
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
