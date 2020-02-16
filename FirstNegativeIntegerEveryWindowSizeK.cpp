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
        lli n;
        cin >> n;
        vector<lli> given(n);
        for (auto &i : given)
        {
            cin >> i;
        }
        lli i;
        lli k;
        cin >> k;
        deque<lli> dq;
        for (i = 0; i < k; i++)
        {
            if (given[i] < 0)
            {
                dq.push_back(i);
            }
        }
        for (; i < n; i++)
        {
            if (dq.empty())
                cout << 0 << " ";
            else
                cout << given[dq.front()] << " ";
            while (!dq.empty() && dq.front() <=  (i - k))
            {
                dq.pop_front();
            }
            if (given[i] < 0)
            {
                dq.push_back(i);
            }
        }
        if (dq.empty())
            cout << 0 << " ";
        else
            cout << given[dq.front()] << " ";
        cout<<endl;
    }
    return 0;
}
