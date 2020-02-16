#include<bits/stdc++.h>
using namespace std;
// class DisjSet{
//     // int *rank, *parent, n;
//     public:
//     // void solve(){
//     //     map<int, int> mp;
//     //     for(int i= 0;i<2*n;i++){
//     //         mp[parent[i]]++;
//     //     }
//     //     for(auto i : mp){
//     //         cout<<i.first<<" "<<i.second<<endl;
//     //     }
//     // }
//     // DisjSet(int n){
//     //     rank = new int[2*n];
//     //     parent = new int[2*n];
//     //     this->n = 2*n;
//     //     makeSet();
//     // }  
//     // void makeSet(){
//     //     for(int i = 0;i<n;i++){
//     //         parent[i] = -1;
//     //     }
//     // }
//     int find(vector<int> &parent,vector<int>  &rank, int x){
//         if(parent[x] != -1 &&(parent[x] != x)){
//             parent[x] = find(parent, rank, parent[x]);
//         }
//         return parent[x];
//     }
//     void Union(vector<int> &parent,vector<int>  &rank, int x, int y){
//         int xset = find(parent,rank,x);
//         int yset = find(parent,rank,y);

//         if(xset == yset && (xset == -1)){
//             parent[x] = x;
//             parent[y] = x;
//         }
//         else if(xset == yset){
//             return;
//         }
//         if(rank[xset] < rank[yset]){
//             parent[xset] = yset;
//         }
//         else if(rank[xset] > rank[yset]){
//             parent[yset] = xset;
//         }
//         else{
//             parent[yset] = xset;
//             rank[xset] = rank[xset] +1;
//         }
//     }
// };
// class node{
//     public: 
//     int data;
//     vector<node*> child;
//     node(int data){
//         this->data = data;
//     }
// };
// map<int, node*> add;

// void insert(int v, int u){
//     if(add.find(v))
// }



class DisjointSetNode{
    public:
    DisjointSetNode *parent;
    int rank = 0;
    int size = 1;
    int data;
    DisjointSetNode(int value){
        this->data = value;
        this->parent = this;
    }
};

DisjointSetNode* findSet(DisjointSetNode *node){
    if(node->parent == node){
        return node;
    }
    node->parent = findSet(node->parent);
    return node->parent;
}


DisjointSetNode* unionSets(DisjointSetNode *firstnode, DisjointSetNode *secondnode){
    DisjointSetNode *parent1 = findSet(firstnode);
    DisjointSetNode *parent2 = findSet(secondnode);
    if(parent1 == parent2)
        return parent1;
    if(firstnode->rank > secondnode->rank)
    {
        secondnode->parent = parent1;
        parent1->size += parent2->size;
        return firstnode;
    }

    parent1->parent = parent2;
    parent2->size += parent1->size;
    if(firstnode->rank == secondnode->rank){
        parent2->rank += 1;
    }
    return parent2;

}



int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    // DisjSet obj;
    vector<DisjointSetNode*> node(2*n);
    for(int i= 0;i<= 2*n;i++){
        node[i] =  new DisjointSetNode(i);
    }
    for(int i = 0;i<n;i++){
        int edge1, edge2;
        cin>>edge1>>edge2;
        unionSets(node[edge1], node[edge2]);
    }
    int mn = INT_MAX;
    int mx = INT_MIN;
    for(int i = 0;i<=2*n;i++){
        int nrOfNodesInSet = findSet(node[i])->size;
        if(nrOfNodesInSet > 1){
            mn = min(nrOfNodesInSet, mn);
            mx = max(nrOfNodesInSet, mx);
        }
    }
    cout<<mn<<" "<<mx<<endl;
    // vector<int> parent(2*n, -1), rank(2*n, 0);
    // whil
    
    // obj.solve();
    
    return 0;
}
