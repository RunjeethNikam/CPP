#include<bits/stdc++.h>
using namespace std;
#define lli long long int
// class stack1{
//     public:
//     vector<lli> st;
//     bool push(lli element){
//         st.push_back(element);
//         return true;
//     }
//     bool pop(){
//         if(st.size() != 0)
//         st.pop_back();
//         else{
//             return false;
//         }
//         return true;
//     }
//     lli top(){
//         return st.back();
//     }
//     bool empty(){
//         return (st.size() == 0);
//     }
//     lli size(){
//         return st.size();
//     }
// };
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data1){
//         data = data1;
//     }
// };




// class stack1{
//     public:
//     Node* head = NULL;
//     lli size = 0;
//     // top
//     // push
//     // pop
//     // size;
//     // empty
//     bool push(lli data){
//         Node* temp = new Node(data);
//         if(head == NULL){
//             head = temp;
//         }
//         else{
//             temp->next = head;
//             head = temp;
//         }
//         size++;
//         return true;
//     }
//     bool pop(){
//         if(head == NULL){
//             return false;
//         }
//         else{
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//             size--;
//         }
//         return true;
//     }
//     lli top(){
//         if(head == NULL){
//             return -1;
//         }
//         else{
//             return head->data;
//         }
//     }
//     lli size1(){
//         return size;
//     }
//     lli empty(){
//         return (head == NULL);
//     }
// };




// class stack1{
//     public:
//     queue<lli> q1, q2;
//     bool push(lli data){
//         q1.push(data);
//     }
//     bool pop(){
//         lli x;
//         while(q1.size() != 1){
//             q2.push(q1.front());
//             q1.pop();
//         }
//         x = q1.front();
//         q1.pop();
//         while(q2.empty() == false){
//             q1.push(q2.front());
//             q2.pop();
//         }
//         return false;
//     }
//     lli top(){
//         lli x;
//         while(q1.size() != 1){
//             q2.push(q1.front());
//             q1.pop();
//         }
//         x = q1.front();
//         q1.pop();
//         while(q2.empty() == false){
//             q1.push(q2.front());
//             q2.pop();
//         }
//         q1.push(x);
//         return x;
//     }
//     lli size(){
//         q1.size();
//     }
//     bool empty(){
//         return q1.empty();
//     }
// };
class Node{
    public:
    lli data;
    Node* next;
    Node* prev;
    Node(int data1){
        data = data1;
        next = NULL;
        prev = NULL;
    }
};
class stack1{
    public:
    Node* head = NULL;
    Node* mid = NULL;
    lli size = 0;
    lli top(){
        if(head){
            return head->data;
        }
    }
    bool deleteMid(){
        if(size == 0){
            return false;
        }
        if(size == 1){
            delete mid;
            mid = NULL;
            head = NULL;
        }
        if(size == 2){
            Node* temp = mid;
            mid = mid->prev;
            mid->next = NULL;
            delete temp;
        }
        if(size >= 3){
            if(size&1){
                Node* temp = mid;
                mid = mid->next;
                temp->prev->next = mid;
                mid->prev = temp->prev;
                delete temp;
            }
            else{
                Node* temp = mid;
                mid = mid->prev;
                mid->next = temp->next;
                temp->next->prev = mid;
            }
        }
        size--;
        return true;
    }
    bool push(lli data){
        size++;
        if(head == NULL){
            head = new Node(data);
            mid = head;
            return true;
        }
        else{
            Node* temp = new Node(data);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        if(size&1){
            mid = mid->prev;
        }
        return true;
    }
    bool pop(){
        if(size == 0){
            return false;
        }
        size--;
        if(size%2 == 0){
            mid = mid->next;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        if(size == 0){
            mid = NULL;
        }
        return true;
    }
    lli middle(){
        if(mid){
            return mid->data;
        }
        return -1;
    }
    bool empty(){
        return (head == NULL);
    }
};
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    stack1 st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.deleteMid();
    st.deleteMid();
    st.deleteMid();
    st.deleteMid();
    cout<<st.middle()<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
