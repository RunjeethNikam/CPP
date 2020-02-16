#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli solve(lli n){
    int dp[n+1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(lli i = 3;i<= n;i++){
        dp[i] += dp[i-3];
    }
    for(lli i = 5;i<= n;i++){
        dp[i] += dp[i-5];
    }
    for(lli i = 10;i<= n;i++){
        dp[i] += dp[i-10];
    }
    return dp[n];
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
