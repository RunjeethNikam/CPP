#include <bits/stdc++.h>
using namespace std;
#define lli long long int
vector<lli> MS(1e5 + 1);
lli solve(lli n)
{
    for (lli i = 2; i <= n; i++)
    {
        MS[i] = max((MS[i/2] + MS[i/3]+MS[i/4]), i);
    }
    return MS[n];
    
}
int main(int argc, char const *argv[])
{
    lli t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;
        MS[0] = 0;
        MS[1] = 1;
        lli ans = solve(n);
        cout << ans << endl;
    }
    return 0;
}
