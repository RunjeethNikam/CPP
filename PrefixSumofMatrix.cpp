#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    lli t;
    cin >> t;
    while (t--)
    {
        lli n, m;
        cin >> n >> m;
        lli dp[1 + n][1 + m];
        memset(dp, 0, sizeof(dp));
        for (lli i = 1; i <= n; i++)
        {
            for (lli j = 1; j <= m; j++)
            {
                cin>>dp[i][j];
            }
        }
        for (lli i = 1; i <= n; i++)
        {
            for (lli j = 1; j <= m; j++)
            {
                // cin>>dp[i][j];
                dp[i][j] = dp[i][j] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
            }
        }
        lli x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<(dp[x2][y2] + dp[x1-1][y1-1] - dp[x2][y1-1] - dp[x1-1][y2])<<endl;
    }
    return 0;
}
