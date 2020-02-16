#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node* add(node *head, int data){
    node* newNode = new node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}
void print(node *head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void reverse1(node* head){
    if(head != NULL){
        reverse1(head->next);
        cout<<head->data<<" ";
    }
}

node* addEnd(node* head, int data){
    node* temp = head;
    node* newNode = new node;
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        return head;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    
    temp->next = newNode;
    return head;
}
// dougth
node* reverse(node* head){
    node *prev = NULL, *curr = head;
    while(curr != NULL){
        node *temp = curr->next;
        prev = curr;
        curr = temp;
    }
    head = curr;
    return head;
}

void midPoint(node* head){
    node *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data<<endl;
}

node* del(node* head, int data){
    if(head->data == data){
        return head->next;
    }
    node* prev = NULL;
    node* curr = head;
    while(curr != NULL && curr->data != data){
        prev = curr;
        curr = curr->next;
    }
    if(curr != NULL)
    prev->next = prev->next->next;
    else{
        return head;
    }
    delete curr;
    return head;
}
node* delAllOccurrence(node* head, int data){
    node* curr = head;
    node* prev = &head;
    while(curr != NULL){
        if(curr->data == data){
            
        }
    }
}

int main(int argc, char const *argv[])
{
    node *head = NULL;
    head = addEnd(head, 10);
    head = addEnd(head, 20);
    head = addEnd(head, 30);
    head = addEnd(head, 40);
    print(head);
    cout<<endl;
    // addEnd(head, 5);
    // print(head);
    // cout<<endl;
    // midPoint(head);
    head = del(head, 50);
    print(head);
    return 0;
}
