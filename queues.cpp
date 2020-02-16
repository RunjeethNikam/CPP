#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next = NULL;
    }
};
Node* front = NULL;
Node* rear = NULL;
void enqueue(int data){
    Node* temp = new Node(data);
    if(front == rear and rear == NULL){
        front = temp;
        rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}
void print(){
    Node* temp = front;
    if(temp == NULL){
        cout<<"empty list";
        return ;
    }
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void dequeue(){
    Node* temp = front;
    front = front->next;
    delete temp;
    if(front == NULL){
        rear = front;
    }
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    int n;
    cin>>n;
    vector<int> given(n);
    for(int i = 0;i<n;i++){
        cin>>given[i];
    }
    for(int i = 0;i<n;i++){
        cout<<given[i]<<" ";
    }
    return 0;
    
}