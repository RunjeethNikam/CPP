#include<bits/stdc++.h>
using namespace std;
void build(vector<int> &given, vector<int> &SegTree,int low ,int high, int pos){
    if(low == high){
        SegTree[pos] = given[low];
        return;
    }
    int mid = low + (high - low)/2;
    build(given, SegTree, low, mid, 2*pos + 1);
    build(given, SegTree, mid+1, high, 2*pos +2);
    SegTree[pos] = SegTree[2*pos + 1] + SegTree[2*pos + 2];
}
void update(vector<int> &SegTree, vector<int> &lazy,int qlow, int qhigh, int low, int high,int val, int pos){
    if(qlow > high or low > high or qhigh < low){
        return ;
    }
    if(lazy[pos] != 0){
        // cout<<"hi"<<endl;
        SegTree[pos] += (high - low + 1)*lazy[pos];
        if(low != high){
            lazy[2*pos + 1] += lazy[pos];
            lazy[2*pos + 2] += lazy[pos];
        }
        lazy[pos] = 0;
    }
    if(qlow <= low and qhigh >= high){
        SegTree[pos] += (high-low +1)*val;
        if(low != high){
            lazy[2*pos + 1] += val;
            lazy[2*pos + 2] += val;
        }
        return;
    }
    int mid = low + (high - low)/2;
    update(SegTree, lazy, qlow, qhigh, low, mid, val, 2*pos + 1);
    update(SegTree, lazy, qlow, qhigh, mid+1, high, val, 2*pos + 2);
    SegTree[pos] = SegTree[2*pos + 1] + SegTree[2*pos + 2];
}
int query(vector<int> &SegTree, vector<int> &lazy,int qlow, int qhigh, int low , int high,int val,int pos){
    if(lazy[pos] != 0){
        SegTree[pos] += (high-low+1) * lazy[pos];
        if(low != high){
            lazy[2*pos + 1] = lazy[pos];
            lazy[2*pos + 2] = lazy[pos];
        }
        lazy[pos] = 0;
    }
    if(qlow > high or qhigh < low or low > high){
        return 0;
    }
    if(qlow <= low and qhigh >= high){
        return SegTree[pos];
    }
    int mid = low + (high-low)/2;
    return query(SegTree, lazy, qlow, qhigh, low, mid, val, 2*pos+1)+query(SegTree, lazy, qlow, qhigh, mid+1, high, val, 2*pos+2);
}
void print(vector<int> given){
    for(auto i = 0;i<given.size();i++){
        cout<<given[i]<<" ";
    }
}
int main(int argc, char const *argv[])
{
    cout<<"enter the size"<<endl;
    int size;
    cin>>size;
    vector<int> given(size),SegTree(4*size, 0), lazy(4*size, 0), output(size);
    for(auto i = 0;i<size;i++)
        cin>>given[i];
    build(given, SegTree, 0, size-1, 0);
    // print(SegTree);
    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        l--;
        r--;
        update(SegTree, lazy, l, r, 0, size-1,1, 0);
    }
    // show
    for(auto i = 0;i<size;i++){
        cout<<query(SegTree, lazy, i, i, 0, size-1,1, 0)<<" ";
    }
    return 0;
}
