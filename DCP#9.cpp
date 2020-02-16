#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    
    while(t--){
        lli n;
        cin>>n;
        vector<lli> given(n+1);
        lli dp[n+1][2];
        memset(dp, 0, sizeof(dp));
        for(lli i = 1;i<= n;i++){
            cin>>given[i];
        }
        dp[1][0] = given[1];
        dp[1][1] = 0;
        for(lli i = 2;i<given.size();i++){
            dp[i][0] = max(dp[i-2][0], dp[i-2][1]) + given[i];
            dp[i][1] = max(dp[i-1][0], dp[i-1][1]);
        }
        cout<<max(dp[n][0], dp[n][1])<<endl;

    }
    
    
    return 0;
}
