#include <bits/stdc++.h>
using namespace std;
int dp[110][110];
int given[110][110];
int t, h, w;
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    cin >> t;
    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        cin >> h >> w;
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                cin >> given[i][j];
            }
        }
        for (int i = 1; i <= w; i++)
        {
            dp[h][i] = given[h][i];
        }
        for (int i = h - 1; i > 0; i--)
        {
            for (int j = 1; j <= w; j++)
            {
                dp[i][j] = given[i][j] + max({dp[i + 1][j - 1], dp[i + 1][j], dp[i + 1][j + 1]});
            }
        }
        // for (int i = 1; i <= h; i++)
        // {
        //     for (int j = 1; j <= w; j++)
        //     {
        //         cout << dp[i][j] <<" ";
        //     }
        //     cout<<endl;
        // }
        int mx = -1;
        for (int i = 1; i <= w; i++)
        {
            mx = max(dp[1][i], mx);
        }
        cout<<mx<<endl;
    }

    return 0;
}
