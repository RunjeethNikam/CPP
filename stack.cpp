#include<bits/stdc++.h>
using namespace std;
#define lli long long int
class Node{
    public:
    lli data;
    Node *next, *prev;
    Node(lli data1){
        data = data1;
        next = prev = NULL;
    }
};
class Stack{
    Node *head = NULL;
    lli size = 0;
    Node *mid = NULL;
    public:
    void Mid(){
        if(mid){
            cout<<mid->data<<" ";
        }
        else{
            cout<<" empty ";
        }
        cout<<endl;
    }
    lli Size(){
        return size;
    }
    lli Top(){
        if(head){
            return head->data;
        }
        return INT_MIN;
    }
    bool push(lli data){
        Node *temp = new Node(data);
        if(head){
            temp->next = head;
            head->prev = temp;
            head = temp;
            if(size%2 == 0){
                mid = mid->prev;
            }
        }
        else{
            mid = head = temp;
        }
        size++;
        return true;
    }
    bool pop(){
        if(head){
            if(size&1)
            mid= mid->next;
            Node *temp = head;
            head = head->next;
            if(head)
            head->prev = NULL;
            delete temp;
            size--;
            return true;
        }
        else{
            cout<<"empty";
        }
        return false;
    }
    void print(){
        Node *temp = head;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    bool empty(){
        return (head == NULL);
    }
    void deleteMid(){
        if(mid){
            Node* temp = mid;
            if(size&1){
                mid = mid->next;
            }
            else{
                mid = mid->prev;
            }
            if(size >= 3){
                Node* prev = temp->prev;
                if(prev != mid){
                prev->next = mid;
                mid->prev = prev;}
                else{
                    Node *next = temp->next;
                    mid->next = next;
                    next->prev = mid;
                }
                delete temp;
                
            }
            if(size == 2){
                mid->next = NULL;
                delete temp;
            }
            if(size == 1){
                head = mid = NULL;
                delete temp;
            }
            size--;
        }
    }
};
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.deleteMid();
    st.deleteMid();
    st.deleteMid();
    st.deleteMid();
    st.print();
    st.Mid();
    
    // st.print();
    return 0;
}
