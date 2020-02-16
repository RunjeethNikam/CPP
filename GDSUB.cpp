#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod %1000000007
int main(int argc, char const *argv[])
{
    lli n,k;
    cin>>n>>k;
    lli dp[1010][1010];
    memset(dp, 0, sizeof(dp));
    // for(lli i = 0;i<1010;i++){
    //     for(lli j = 0;j<1010;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    map<lli, lli> mp;
    for(lli i = 0;i<n;i++){
        lli x;
        cin>>x;
        mp[x]++;
    }
    lli val[1010];
    memset(val, 0, sizeof(val));
    lli i = 1;
    for( auto it = mp.begin();it != mp.end();it++, i++){
        dp[1][i] = (dp[1][i-1]+it->second)mod;
        // cout<<dp[1][i]<<" ";
        val[i] = it->second;
    }
    // cout<<endl;
    lli ans  = 1;
    for(lli i = 2;i<= mp.size();i++){
        for(lli j = i;j<= mp.size();j++){
            dp[i][j] = (dp[i-1][j-1] * val[j])mod;
            dp[i][j] = (dp[i][j] + dp[i][j-1])mod;
            // cout<<dp[i][j]<<" ";
        }
        // cout<<endl;
        
    }
    for(lli i = 1;i<=min(k, 1007ll);i++){
        ans = (ans + dp[i][mp.size()])mod;
    }
    cout<<ans<<endl;
    return 0;
}
