#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node(int data1){
        data = data1;
    }
    Node* next = NULL;
    Node* prev = NULL;
};
int countNodes = 0;
Node* mid = NULL;
Node* push(Node* head, int data){
    countNodes++;
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        mid = temp;
        return head;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
    if(countNodes%2 == 0){
        mid = mid->prev;
    }
    return head;
}
Node* pop(Node* head){
    if(head){
        countNodes--;
        if(countNodes == 0){
            mid = NULL;
        }
        else{
            if(countNodes%2 == 0){
                mid = mid->next;
            }
            else{
                // mid = mid->next;
            }
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else{
        cout<<"underflow";
    }
    return head;
}
int top(Node* head){
    if(head){
        return head->data;
    }
    else{
        cout<<"error";
    }
    return -1;
}
int middle(){
    if(mid){
        return mid->data;
    }
    return -1;
}
void delMid(Node* head){
    if(countNodes == 1){
        head = NULL;
        mid = NULL;
    }
    else if(countNodes == 2){
        Node* temp = mid->prev;
        temp->next = NULL;
        Node* hi = mid;
        delete hi;
        mid = temp;
    }
    else{
        if(countNodes&1){
            Node* prev = mid->prev;
            Node* next = mid->next;
            Node* temp = mid;
            prev->next = next;
            next->prev = prev;
            delete temp;
            mid = next;
        }
        else{
            Node* prev = mid->prev;
            Node* next = mid->next;
            Node* temp = mid;
            prev->next = next;
            next->prev = prev;
            delete temp;
            mid = prev;
        }
    }
}

int main(int argc, char const *argv[])
{
    Node* head = NULL;
    head = push(head, 1);
    head = push(head, 2);
    head = push(head, 3);
    head = push(head, 4);
    head = push(head, 5);
    head = push(head, 6);
    head = push(head, 7);
    head = pop(head);
    head = pop(head);
    head = pop(head);
    head = pop(head);
    head = pop(head);
    head = pop(head);
    head = pop(head);
    // cout<<countNodes<<endl;
    cout<<middle();
    return 0;
}
