#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("/home/home/cpp/inputf.in", "r", stdin);
        freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    lli n;
    cin >> n;
    priority_queue<lli> mxBucket;
    priority_queue<lli, vector<lli>, greater<lli>> mnBucket;
    for (lli i = 1; i <= n; i++)
    {
        lli x;
        cin >> x;
        mxBucket.push(x);
        if (abs((int)mnBucket.size() - (int)mxBucket.size()) > 1)
        {
            if (mxBucket.size() > mnBucket.size())
            {
                mnBucket.push(mxBucket.top());
                mxBucket.pop();
            }
            else
            {
                mxBucket.push(mnBucket.top());
                mnBucket.pop();
            }
        }
        if (i & 1)
        {
            mnBucket.push(mxBucket.top());
            if (mxBucket.top() == mnBucket.top())
            {
                cout << fixed << setprecision(1) << (float)mnBucket.top() << endl;
                mnBucket.pop();
            }
            else
            {
                cout << fixed << setprecision(1) << (float)mnBucket.top() << endl;
                mxBucket.pop();
            }
            if (abs((int)mnBucket.size() - (int)mxBucket.size()) > 1)
            {
                if (mxBucket.size() > mnBucket.size())
                {
                    mnBucket.push(mxBucket.top());
                    mxBucket.pop();
                }
                else
                {
                    mxBucket.push(mnBucket.top());
                    mnBucket.pop();
                }
            }
        }
        else
        {
            cout << fixed << setprecision(1) << ((float)mxBucket.top() + mnBucket.top()) / 2 << endl;
        }
    }
    return 0;
}
