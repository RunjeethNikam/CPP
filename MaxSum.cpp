#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli dp[100000];
lli solve(lli n){
    if(n == 0){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    else{
        dp[n] = max(n,  (solve(n/2) + solve(n/3) + solve(n/4)));
        return dp[n];
    }
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        memset(dp, -1, sizeof(dp));
        lli n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
