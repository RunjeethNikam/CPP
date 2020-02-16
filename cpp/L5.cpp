#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next, *prev;
};
node* addFirst(node* head, int data){
    node* newNode = new node;
    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL;
    if(head!=NULL)
        head->prev = newNode;
    head = newNode;
    return head;
}
void print(node* head){
    node* curr = head;
    while(curr->next != NULL){
        // cout<<curr->data<<" ";
        curr = curr->next;
    }
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->prev;
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    node *head = NULL;
    head = addFirst(head, 10);
    head = addFirst(head, 20);
    head = addFirst(head, 30);
    print(head);
    return 0;
}
