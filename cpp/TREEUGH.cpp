#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
struct node
{
    lli value;
    vector<lli> edges;
};

vector<lli> sums(500005, 0);
vector<bool> seen(500005, 0);

void update(lli pos, vector<node> &Tree, lli sumup){
    if(seen[pos])
        return;
    else{
        seen[pos] = 1;
        sums[pos] += sumup;
        Tree[pos].value += sums[pos];
        for(auto& child : Tree[pos].edges){
            update(child, Tree, sums[pos]);
        }
    }
}

int main(int argc, char const *argv[])
{
    lli nodes, queries;
    cin>>nodes>>queries;
    vector<node> Tree(nodes + 1);
    for(auto i = 0;i<nodes;i++){
        cin>>Tree[i].value;
    }    
    for(auto i =0;i<nodes-1;i++){
        lli parent, child;
        cin>>parent>>child;
        parent--;
        child--;
        Tree[parent].edges.push_back(child);
        Tree[child].edges.push_back(parent);
    }
    for(auto i = 0;i<queries;i++){
        lli nod, val;
        cin>>nod>>val;
        nod--;
        sums[nod] += val;
    }
    cout<<endl;
    update(0, Tree, 0);
    for(auto i = 0;i<nodes;i++){
        cout<<Tree[i].value<<" ";
    }
    return 0;
}
