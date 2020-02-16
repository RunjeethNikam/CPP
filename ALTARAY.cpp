#include <bits/stdc++.h>
using namespace std;
bool check(int x, int y)
{
    return ((x ^ y) < 0);
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> given(n);
        vector<int> result(n);
        for (int i = 0; i < n; i++)
        {
            cin >> given[i];
        }
        result.back() = 1;
        for (int i = given.size() - 2; i >= 0; i--)
        {
            if (check(given[i], given[i + 1]))
            {
                result[i] = result[i + 1] + 1;
            }
            else
            {
                result[i] = 1;
            }
        }
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout<<endl;
    }

    return 0;
}
