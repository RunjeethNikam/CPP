#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next = NULL;
    Node(int data1){
        data = data1;
    }
};
Node* head = NULL;
Node* tail = NULL;
void push(int data){
    Node* temp = new Node(data);
    if(head == tail){
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
void remove(int data){
    if(head == NULL){
        return ;
    }
    while (head && head->data == data)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    if(head == NULL){
        return ;
    }
    if(head == NULL){
        return;
    }
    Node* prev = head;
    Node* curr = head;
    while(curr){
        if(curr->data == data){
            Node* temp = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete temp;
        }
    }
}
void print(){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(int argc, char const *argv[])
{
    // int i = 1000;
    for(int i = 0;i<1000;i++){
        int x;
        cin>>x;
        push(x);
    }
    int q;
    cin>>q;
    for(int i = 0;i<q;i++){
        int Q, data;
        cin>>Q>>data;
        if(Q == 1){
            push(data);
        }
        else{
            remove(data);
        }
    }
    print();
    return 0;
}
