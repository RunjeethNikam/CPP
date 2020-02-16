#include<bits/stdc++.h>
using namespace std;
int mod(int i,int g, int n){
    // int result = (i-1)%n;
    // if(result < 0)
    //     return result+n;
    // return result;
    // return (i-i+1)%n;
    i = (i-g)%n;
    if(i<0)
        i += n;
    i = (i+1)%n;
    return i;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> given(n);
    for(auto &i : given){
        cin>>i;
    }
    vector<int> dp(n);
    for(int i = 0;i<n;i++){
        if(given[i] == 0)
            continue;
        dp[(i+1)%n]++;
        dp[mod(i,given[i], n)]--;
    }
    int start = 0;
    int count = dp.front();
    for(int i = 1;i<n;i++){
        dp[i] += dp[i-1];
        if(count < dp[i]){
            start = i;
            count = dp[i];
        }
    }
    cout<<start+1;
    // cout<<mod(5, 6);
    return 0;
}
