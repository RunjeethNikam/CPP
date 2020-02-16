#include<bits/stdc++.h>
using namespace std;
#define lli long long int
vector<string> result;
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
    public:
    node* root;
    Trie(){
        root = new node('\0');
    }
    void add(string word){
        node* temp = root;
        for(auto i:word){
            if(temp->h[i]){
                temp = temp->h[i];
            }
            else{
                temp->h[i] = new node(i);
                temp = temp->h[i];
            }
        }
        temp->isTerminal = true;
    }
    void dfs(node* current, string tillNow){
        tillNow.push_back(current->data);
        if(current->isTerminal){
            result.push_back(tillNow);
        }
        for(auto it = current->h.begin() ; it != current->h.end();it++){
            dfs(it->second,tillNow);
        }
    }
    bool autocomplete(string prefix){
        node* temp = root;
        for(auto i : prefix){
            if(temp->h[i]){
                temp = temp->h[i];
            }
            else{
                return false;
            }
        }
        prefix.pop_back();
        dfs(temp, prefix);
        return true;
    }
};
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    Trie hi;
    hi.add("dog");
    hi.add("deer");
    hi.add("deal");
    if(hi.autocomplete("de")){
        for(auto i : result){
            cout<<i<<endl;
        }
    }else{
        cout<<"no prefix"<<endl;
    }
    return 0;
}
