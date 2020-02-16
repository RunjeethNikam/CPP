#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next,*prev;
};

node* insert(node* head, int data){
    if(head == NULL){
        node *temp = new node;
        temp->data = data;
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
    }
    else{
        node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        node *temp1 = new node;
        temp1->data = data;
        temp1->next = NULL;
        temp1->prev = temp;
        temp->next = temp1;
    }
    return head;
}

node* delnode(node* head, int data){
    if(head->data == data){
        node *temp = head;
        head = head->next;
        delete temp;
    }
    else{
        node *temp = head;
        while(temp != NULL && temp->data != data){
            temp = temp->next;
        }
        if(temp->next == NULL){
            temp->prev->next = NULL;
            delete temp;
        }
        else{
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
    }
    return head;
}
void print(node* head){
    node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
node* rem1(node* head){
    node *temp = head;
    head = head->next;
    if(head != NULL){
        head->prev = NULL;
    }
    delete temp;
    return head;
}
node* rem2(node* head){
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    if(temp->prev == NULL){
        head = NULL;
    }
    else{
        temp->prev->next = NULL;
        delete temp;
    }
    return head;
    
}
int main(int argc, char const *argv[])
{
    node *head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 6);
    head = insert(head, 7);
    head = rem2(head);
    head = rem2(head);
    print(head);
    return 0;
}
