#include<bits/stdc++.h>
using namespace std;
int constructSTUtil(int arr[], int ss, int se, int *st, int si){
    if(ss == se){
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = ss+((se-ss)/2);
    st[si] = constructSTUtil(arr, ss, mid, st, 2*si + 1) + constructSTUtil(arr,mid+1,  se, st, 2*si + 2);
    return st[si];
}
int* constructST(int arr[], int n){
    int max_size = 2*n;
    int *st = new int[max_size];
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}
int getSumUtil(int *st, int ss, int se, int qs, int qe, int si){
    if(qs<= ss && qe >= se){
        return st[si];
    }
    if(se < qs || ss > qe){
        return 0;
    }
    int mid = ss + (se-ss)/2;
    return getSumUtil(st, ss, mid, qs, qe, 2*si + 1) + getSumUtil(st, mid+1, se, qs, qe, 2*si + 2);
}
int getSum(int *st, int n, int qs, int qe){
    if(qs < 0 || qe > n-1 || qs > qe)
    {
        cout<<"invalid input";
        return -1;
    }
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}
void updateValueUtil(int *st, int ss, int se, int i, int diff, int si){
    if(i< ss || i> se){
        return ;
    }
    st[si] += diff;
    if(se != ss){
        int mid = ss + (se-ss)/2;
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se,i, diff, 2*si + 2);

    }
}
void updateValue(int arr[], int *st, int n, int i , int new_value){
    if(i < 0 || i> n-1){
        cout<<"invalid input";
        return;
    }
    int diff = new_value - arr[i];
    arr[i] = new_value;
    updateValueUtil(st, 0, n-1, i, diff, 0);

}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *st = constructST(arr, n);

    cout<<getSum(st, n, 1, 3);
    updateValue(arr, st, n, 1, 10);
    return 0;
}
