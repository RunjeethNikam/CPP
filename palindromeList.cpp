#include<bits/stdc++.h>
using namespace std;
#define lli long long int
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
    }
};
class List{
    public:
    Node* head = NULL;
    void push(int data){
        Node* temp = head;
        Node* newNode = new Node(data);
        if(temp == NULL){
            head = newNode;
            return ;
        }
        while(temp->next){
            temp= temp->next;
        }
        temp->next = newNode;
    }
};
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli n;
    cin>>n;
    List ls ;
    for(lli i = 0;i<n;i++){
        lli x;
        cin>>x;
        ls.push(x);
    }
    return 0;
}
