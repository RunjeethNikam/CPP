// #include<bits/stdc++.h>
// using namespace std;
// #define lli int
// class Queue{
//     public:
//     lli front = -1, rear = -1, capacity = 1000, size = 0;
//     lli arr[1000];
//     bool isFull(){
//         return (capacity==size);
//     }
//     bool isEmpty(){
//         return (size == 0);
//     }
//     bool enQueue(int data){
//         if(isFull()){
//             return false;
//         }
//         if(front == -1){
//             front = rear = 0;
//             arr[front] = data;
//             return true;
//         }
//         else{
//             rear = (rear+1)%capacity;
//             arr[rear] = data;
//             size += 1;
//         }
//     }
//     bool dequeue(){
//         if(isEmpty()){
//             return false;
//         }
//         front = (front+1)%capacity;
//         size -= 1;
//         if(size == 0){
//             front = rear = -1;
//         }
//     }
//     int Front(){
//         if(isEmpty()){
//             return INT_MIN;
//         }
//         return arr[front];
//     }
//     int Rear(){
//         if(isEmpty()){
//             return INT_MIN;
//         }
//         return arr[rear];
//     }

// };
// int main(int argc, char const *argv[])
// {
//     freopen("/home/home/cpp/inputf.in", "r", stdin);
//     freopen("/home/home/cpp/outputf.in", "w", stdout);
//     ios_base::sync_with_stdio(0);
//     Queue *q = new Queue();
//     q->enQueue(1);
//     q->enQueue(2);
//     q->enQueue(3);
//     q->enQueue(4);
//     while(!q->isEmpty()){
//         cout<<(q->Front())<<" ";
//         q->dequeue();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #define lli long long int
// class Node
// {
// public:
//     int data;
//     Node *next, *prev;
//     Node(int data1)
//     {
//         data = data1;
//         prev = next = NULL;
//     }
// };
// class Queue
// {
// public:
//     Node *front = NULL, *rear = NULL, *mid = NULL;
//     int size = 0;
//     void deleteMid(){
//         if(size == 1){
//             mid = front = rear = NULL;
//             size--;
//         }
//         else if(size == 2){
//             Node *temp = mid;
//             delete temp;
//             mid = rear = front;
//         }
//         else if(size&1){
//             Node* temp = mid;
//             mid = mid->next;
//             temp->prev->next = mid;
//             mid->prev = temp->prev;
//             size--;
//             delete temp;
//         }
//         else{
//             Node* temp = mid;
//             mid = mid->prev;
//             mid->next = temp->next;
//             temp->next->prev = mid;
//             delete temp;
//         }
//         size--;
//         return;
//     }
//     bool enQueue(int data)
//     {
//         Node *temp = new Node(data);
//         if (front == NULL)
//         {
//             mid = front = rear = temp;
//             size++;
//             return true;
//         }
//         else
//         {
//             rear->next = temp;
//             temp->prev = rear;
//             rear = temp;
//         }
//         size++;
//         if(size&1){
//             mid = mid->prev;
//         }
//         return true;
//     }
//     bool deQueue()
//     {
//         if (front)
//         {
//             size--;
//             if(size&1){
//                 mid = mid->prev;
//             }
//             Node *temp = front;
//             front = front->next;
//             if (front)
//                 front->prev = NULL;
//             else
//                 mid = front = rear = NULL;
//             delete temp;
//             return true;
//         }
//         return false;
//     }
//     lli Front()
//     {
//         if (front)
//         {
//             return front->data;
//         }
//     }
//     bool empty()
//     {
//         return (front == NULL);
//     }
// };
// int main(int argc, char const *argv[])
// {
//     freopen("/home/home/cpp/inputf.in", "r", stdin);
//     freopen("/home/home/cpp/outputf.in", "w", stdout);
//     ios_base::sync_with_stdio(0);
//     Queue q;
//     q.enQueue(1);
//     q.enQueue(2);
//     q.enQueue(3);
//     q.enQueue(4);
//     while (!q.empty())
//     {
//         cout << q.Front() << " ";
//         q.deQueue();
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define lli long long int
class linkedList{
    public:
    list<int> lt;
    list<int>::iterator mid;
    void push(int data){
        lt.push_back(data);
        if(lt.size() ==1){
            mid = lt.begin();
            return;
        }
        if(lt.size()&1){
            mid++;
        }
    }
    void pop(){
        if(lt.size() != 0){
            if(lt.size()%2==0){
                mid++;
            }
            lt.pop_front();
        }
    }
    int Mid(){
        if(!lt.empty()){
            cout<<*mid;
        }
        else{
            cout<<(-1);
        }
    }
    void deleteMid(){
        if(lt.size()){
        auto it = mid;
        if(lt.size()&1){
            --mid;
        }
        else{
            mid++;
        }
        lt.erase(it);
        }
    }
    void Front(){
        if(lt.size()){
            cout<<lt.front();
        }
        else{
            cout<<(-1);
        }
    }
};
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli n;
    cin>>n;
    linkedList lt;
    for(lli i =0;i<n;i++){
        lli x;
        cin>>x;
        lt.push(x);
    }
    lli q;
    cin>>q;
    while(q--){
        lli c;
        cin>>c;
        if(c== 1){
            lli data;
            cin>>data;
            lt.push(data);
        }
        if(c == 2){
            lt.pop();
        }
        if(c == 3){
            lt.deleteMid();
        }
        if(c == 4){
            lt.Front();
            cout<<endl;
        }
        if(c == 5){
            lt.Mid();
            cout<<endl;
        }
        // cout<<endl;
    }
    return 0;
}
