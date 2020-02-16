#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    char data;
    // bool flag = false;
    // unordered_map<char, node*> child;
    vector<node*> child;''
    int count = 0;
    node(char data){
        this->data = data;
        for(int i= 0;i<26;i++){
            this->child.push_back(NULL);
        }
    }
};
class trie{
    public:
    node *root;
    trie(){
        root = new node(' ');
    }
    void insert(string contact){
        node *temp = root;
        int i = 0;
        while(i < contact.size()){
            
            if(temp->child[contact[i] - 'a'] == NULL){
                temp->child[contact[i] - 'a'] = new node(contact[i]);
            }
            temp = temp->child[contact[i] - 'a'];
            temp->count += 1;
            i++;
        }
        // temp->flag = true;
    }
    int find(string contact){
        node *temp = root;
        int i = 0;
        while(i < contact.size()){
            if(temp->child[contact[i] - 'a'] == NULL){
                return 0;
            }
            temp = temp->child[contact[i]-'a'];
            i++;
        }
        // int count = 0;
        // solve(temp, count);
        // return count;
        return temp->count;
    }
    // void solve(node *temp, int &count){
    //     if(temp == NULL)
    //         return ;
    //     if(temp->flag)
    //         count++;
        
    //     for(auto i : temp->child){
    //         solve(i, count);
    //     }
    // }
};
int main(int argc, char const *argv[])
{
    trie obj;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        string cho, ans;
        cin>>cho>>ans;
        if(cho == "add")
            obj.insert(ans);
        else
            cout<<obj.find(ans)<<endl;
    }
    
    return 0;
}
