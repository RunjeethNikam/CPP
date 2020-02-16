#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;
const int V = 200;
int a[N];
int cnt[V + 1];
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = 0;
    for (int i = 0; i < d; i++)
    {
        cnt[a[i]]++;
    }
    for (int i = d; i <= n - 1; i++)
    {
        int acc = 0;
        int low_median = -1, high_median = -1;
        for (int v = 0; v <= V; v++)
        {
            acc += cnt[v];
            if (low_median == -1 && acc >= int(floor((d+1) / 2.0)))
            {
                low_median = v;
            }
            if (high_median == -1 && acc >= int(ceil((d+1) / 2.0)))
            {
                high_median = v;
            }
        }
        float double_median = (low_median + high_median)/2.0;
        if (a[i] >= 2*double_median)
        {
            res++;
        }
        cnt[a[i - d]]--;
        cnt[a[i]]++;
    }
    cout << res << endl;
    return 0;
}
