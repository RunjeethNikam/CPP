#include <bits/stdc++.h>
using namespace std;
int dp[31][31];
int given[31];
int n;
int presum[31];
int pre(int presum[], int i, int j)
{
    if (i == 0)
    {
        return presum[j];
    }
    return (presum[j] - presum[i - 1]);
}
int solve()
{
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = given[i];
    }

    for (int k = 1; k < n; k++)
    {
        int i = 0, j = k;
        while (i < n and j < n)
        {
            int left = given[i], right = given[j];
            left = left + ((pre(presum, i + 1, j)) - dp[i + 1][j]);
            right = right + ((pre(presum, i, j - 1)) - dp[i][j - 1]);
            dp[i][j] = max(left, right);
            i++, j++;
        }
    }
    // int x = dp[0][n - 1];
    return dp[0][n-1];
}
int solve1(int low, int high)
{
    if (low > high)
        return 0;
    if (dp[low][high] != -1)
        return dp[low][high];
    int &x = dp[low][high];
    if (low == high)
        return x = given[low];
    return x = max(given[low] + max(solve1(low + 1, high - 1), solve1(low + 2, high)),
                   given[high] + max(solve1(low + 1, high - 1), solve1(low, high - 2)));
}

int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> given[i];
        presum[0] = given[0];
        for (int i = 1; i < n; i++)
            presum[i] = presum[i - 1] + given[i];

        memset(dp, -1, sizeof(dp));
        cout << solve1(0, n - 1);
        cout << " " << solve() << endl;
    }
    return 0;
}