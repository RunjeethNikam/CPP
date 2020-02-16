#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int n;
    node *left, *right;
    node(int data){
        this->n = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *root = NULL;
node* insert(node *head, int data){
    if(head){
        if(data > head->n ){
        head->right = insert(head->right, data);
        }
        else if(data < head->n){
            head->left = insert(head->left, data);
        }
        return head;
    }
    return (new node(data));
}

void printDepth(){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int count = 1;
    while(q.size()> 1){
        node *temp = q.front();
        q.pop();
        if(temp == NULL){
            // count++;
            q.push(NULL);
            cout<<endl;
        }
        else{
            // if(temp->n == data){
            //     return count;
            // }
            cout<<" "<<temp->n<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

int depth(int data){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int count = 1;
    while(q.size()> 1){
        node *temp = q.front();
        q.pop();
        if(temp == NULL){
            count++;
            q.push(NULL);
        }
        else{
            if(temp->n == data){
                return count;
            }
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    // inorder successor.
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        root = insert(root, x);
    }
    int find;
    cin>>find;
    // cout<<(depth(find));
    printDepth();
    return 0;
}
