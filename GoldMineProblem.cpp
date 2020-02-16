#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n, m;
        cin>>n>>m;
        // int M[n][m];
        vector<vector<lli>> M(n+2, vector<lli> (m+2, 0));
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                cin>>M[i][j];
            }
        }
        vector<vector<lli>> dp(n+2, vector<lli> (m+2 ,0));
        for(lli i = 1;i<=n;i++){
            dp[i][m] = M[i][m];
        }
        for(lli j = m;j>0;j--){
            for(lli i = 1;i<=n;i++){
                dp[i][j] = max({M[i][j] + dp[i+1][j+1], M[i][j] + dp[i][j+1], M[i][j] + dp[i-1][j+1]});
            }
        }

        lli mx = -1;
        for(int i = 1;i<=n;i++){
            mx = max(dp[i][1], mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}
