#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
lli dp[2000+1][2000+1];
lli aux[2000+1][2000+1];
lli frac(lli n)
{
    lli result = 1;
    for (lli i = 1; i <= n; i++)
    {
        result = ((result%MOD) * (i%MOD))%MOD;
    }
    return result%MOD;
}
int main(int argc, char const *argv[])
{
    lli n;
    cin >> n;
    for (lli i = 1; i <= n; i++)
    {
        dp[1][i] = i;
        aux[1][i] = 1;
    }
    for(lli i = 2;i<=n;i++){
        for(lli j = 2;j<=n;j++){
            // int x = (j-2 < 0) ?0 : j-2;
            aux[i][j] = ((aux[i][j-1]%MOD)+(aux[i-1][j-2] %MOD))%MOD;
        }
    }
    
    for (lli i = 2; i <= n; i++)
    {
        lli fra = frac(i);
        for (lli j = 1; j <= n; j++)
        {
            dp[i][j] = ((dp[i - 1][j] %MOD) + ((aux[i][j] %MOD)*(fra%MOD))%MOD + (dp[i][j - 1]%MOD) - (dp[i - 1][j - 1] %MOD))%MOD;
        }
    }


    // for(lli i = 1;i<=n;i++){
    //     for(lli j = 1;j<=n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    
    cout << dp[n][n]%MOD;

    return 0;
}
