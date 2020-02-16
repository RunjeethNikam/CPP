#include<bits/stdc++.h>
using namespace std;
int k = 0;
class Node{
    public:
        int data;
        Node *next = NULL, *prev = NULL;
        Node(int data1){
            data = data1;
        }
};
Node* push(Node* head, int data){
    if(k<10){
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
    }
    else{
        head->prev = temp;
        temp->next = head;
        head =  temp;
    }}
    else{
        cout<<"overflow";
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* pop(Node* head){
    if(head == NULL){
        cout<<"underflow";
    }
    else{
        Node* temp = head;
        head= head->next;
        head->prev = NULL;
        delete temp;
    }
    return head;
}
void printmid(Node* head){

}
int main(int argc, char const *argv[])
{
    Node* head = NULL;
    head = push(head, 1);
    head = push(head, 2);
    head = push(head, 3);
    head = push(head, 4);
    head = pop(head);
    print(head);
    return 0;
}
