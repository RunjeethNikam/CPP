#include <bits/stdc++.h>
using namespace std;
#define lli long long int
class Solution
{
public:
    int minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C)
    {
        int result = INT_MAX;
        int i = 0, j = 0, k = 0;
        while (i != A.size() and j != B.size() and k != C.size())
        {
            int sum = max({abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i])});
            result = min(result, sum);
            if(min({A[i], B[j], C[k]}) == A[i]){
                i++;
            }
            else if (min({A[i], B[j], C[k]}) == B[j])
            {
                j++;
            }
            else
            {
                k++;
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
    int size1;
    cin >> size1;
    vector<int> given1(size1);
    for (auto &i : given1)
    {
        cin >> i;
    }
    int size2;
    cin >> size2;
    vector<int> given2(size2);
    for (auto &i : given2)
    {
        cin >> i;
    }
    Solution s;
    auto hi = s.minimize(given, given1, given2);
    cout<<hi<<endl;
    return 0;
}
