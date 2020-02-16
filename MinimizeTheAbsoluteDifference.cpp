#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int solve(vector<int> &A, vector<int> &B, vector<int> &C)
{
    int i = 0, j = 0, k = 0;
    int result = INT_MAX;
    while (i != A.size() and j != B.size() and k != C.size())
    {
        result = min(result, abs(max({A[i], B[j], C[k]}) - min({A[i], B[j], C[k]})));
        if (min({A[i], B[j], C[k]}) == A[i])
            i++;
        else if (min({A[i], B[j], C[k]}) == B[j])
            j++;
        else if (min({A[i], B[j], C[k]}) == C[k])
            k++;
    }
    return result;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    vector<int> a(s1), b(s2), c(s3);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (auto &i : b)
    {
        cin >> i;
    }
    for (auto &i : c)
    {
        cin >> i;
    }
    cout<<solve(a, b, c)<<endl;
    return 0
}
