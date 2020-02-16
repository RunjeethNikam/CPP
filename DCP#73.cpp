#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList{
    public:
    node *head = NULL;
    int size = 0;
    void add(int data){
        node* temp = new node(data);
        temp->next = head;
        head = temp;
        size++;
    }
    void remove(){
        if(size == 0)
            return ;
        node *temp = head;
        head = head->next;
        delete temp;
        size--;
    }
    void reverse(){
        node *pre = NULL, *current = head, *next = head->next;
        if(size >= 2){
            while (current)
            {
                current->next = pre;
                pre = current;
                current = next;
                if(current == NULL){
                    break;
                }
                next = current->next;
            }
            head = pre;
        }
    }
    void print(){
        node *temp = head;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main(int argc, char const *argv[])
{
    LinkedList lt;
    lt.add(1);
    lt.add(2);
    lt.add(3);
    lt.add(4);
    lt.add(5);
    lt.add(6);
    lt.reverse();
    lt.print();
    return 0;
}
