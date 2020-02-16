#include<bits/stdc++.h>
using namespace std;
int constructSTUtil(vector<int> arr, vector<int> &st, int ss, int se, int si){
    if(ss == se){
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = ss + (se-ss)/2;
    st[si] = max(constructSTUtil(arr, st, ss, mid, 2*si + 1) , constructSTUtil(arr, st, mid+1, se, 2*si + 2));
    return st[si];
}

void constructST(vector<int> arr, int n, vector<int> &st){
    constructSTUtil(arr, st, 0, n-1, 0);
}

int getMaxUtil(vector<int> &st, int ss, int se, int qs, int qe, int si){
    if(qs <= ss && se<= qe){
        return st[si];
    }
    if(qs > se || qe < ss){
        return 0;
    }
    int mid = ss + (se-ss)/2;
    return max(getMaxUtil(st, ss, mid, qs, qe, 2*si+1), getMaxUtil(st, mid + 1, se, qs, qe, 2*si+2));
}

int getMax(vector<int> &st, int l, int r, int n){
    return getMaxUtil(st, 0, n-1, l, r, 0);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i : arr){
        cin>>i;
    }
    vector<int> st(2*n);
    constructST(arr, n, st);
    int q;
    cin>>q;
    for(int i = 0;i<q;i++){
        int l, r;
        cin>>l>>r;
        cout<<getMax(st, l, r, n);
    }
    // for(auto i: st){
    //     cout<<i<<endl;
    // }
    return 0;
}
