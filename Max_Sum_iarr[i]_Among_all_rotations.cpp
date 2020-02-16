#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n){
    int cum_sum = 0;
    for(int i = 0 ;i<n;i++){
        cum_sum += arr[i];
    }
    int current_val = 0;
    for(int i = 0;i<n;i++){
        current_val += i*arr[i];
    }
    int res = current_val;
    for(int i = 1;i<n;i++){
        int next_val = current_val - (cum_sum - arr[i-1]) + arr[i-1]*(n-1);
        current_val = next_val;
        res = max(res, current_val);
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[] = {8, 3, 1, 2};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxSum(arr, n)<<endl;
    return 0;
}
