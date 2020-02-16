#include<bits/stdc++.h>
using namespace std;
#define lli long long int
class node{
    public:
        char data;
        unordered_map<char, node*> h;
        bool isTerminal;
        node(char d){
            data = d;
            isTerminal = false;
        }
};
class Trie{
    node* root;
    public:
        Trie(){
            root = new node('\0');
        }
        void addWord(string word){
            node* temp = root;
            for(auto i: word){
                if(temp->h[i]){
                    temp = temp->h[i]; 
                }
                else{
                    
                    node* child = new node(i);
                    temp->h[i] = child;
                    temp = child;
                }
            }
            temp->isTerminal = true;
        }
        bool search(string word){
            node *temp = root;
            for(auto i : word){
                if(temp->h[i]){
                    temp = temp->h[i];
                }
                else{
                    return false;
                }
            }
            return temp->isTerminal;
        }
};
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);   
    Trie t;
    t.addWord("runjeeth");
    t.addWord("rohit") ;
    t.addWord("supriya");
    cout<<t.search("runjeeth");
    return 0;
}
