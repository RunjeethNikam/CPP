#include <bits/stdc++.h>
using namespace std;
#define lli long long int
class Solution
{
public:
    int maxArea(vector<int> &A)
    {
        int i = 0, j = A.size() - 1;
        int result = INT_MIN;
        while (i < j)
        {
            // int sum = min(A[i], A[j]) * (j - i);
            result = max(result, (min(A[i], A[j]) * (j - i)));
            if (A[i] < A[j])
                i++;
            else
            {
                j--;
            }
        }
        return result;
    }
};
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    int size;
    cin >> size;
    vector<int> given(size);
    for (auto &i : given)
    {
        cin >> i;
    }
    Solution s;
    auto hi = s.maxArea(given);
    cout << hi << endl;
    return 0;
}
