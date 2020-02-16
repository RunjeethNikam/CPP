#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli solve(lli n){
    lli dp[n+1];
    dp[1] = 1;
    dp[0] = 0;
    dp[2] = 2;
    for(lli i = 3;i<= n;i++){
        if(i&1){
            dp[i] =  1+dp[i-1];
        }
        else{
            dp[i] = min(1+dp[i/2], 1+dp[i-1]);
        }
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
