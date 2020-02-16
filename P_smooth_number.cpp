#include <bits/stdc++.h>
using namespace std;
#define lli long long int
bool check(lli n, lli p)
{
    lli maximum = -1;
    while (n % 2 == 0)
    {
        n = n / 2;
        maximum = 2;
    }
    for (lli i = 3; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n = n / i;
            maximum = i;
        }
    }
    if (n > 2)
    {
        maximum = n;
    }
    return (maximum <= p);
}
int main(int argc, char const *argv[])
{
    vector<lli> prime(1000000, true);
    prime[0] = 0;
    prime[1] = 0;
    for (lli i = 2; i * i < prime.size(); i++)
    {
        if (prime[i])
        {
            for (lli j = i * i; j < prime.size(); j += i)
            {
                prime[j] = false;
            }
        }
    }
    // #ifndef ONLINE_JUDGE
    // freopen("/home/home/cpp/inputf.in", "r", stdin);
    // freopen("/home/home/cpp/outputf.in", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    lli n;
    cin >> n;
    vector<lli> given(n);
    for (auto &i : given)
    {
        cin >> i;
    }
    lli p;
    cin >> p;
    vector<lli> pri;
    for (auto i : given)
    {
        if (check(i, p))
        {
            pri.push_back(i);
        }
    }
    if (pri.size())
    {
        sort(pri.begin(), pri.end());
        lli largest_number = pri.back();
        lli right = -1, left = -1;
        for (lli i = largest_number + 1; i < prime.size(); i++)
        {
            if (prime[i])
            {
                right = i;
                break;
            }
        }
        for (lli i = largest_number - 1; i > 1; i--)
        {
            if (prime[i])
            {
                left = i;
                break;
            }
        }
        if ((right - largest_number) >= (largest_number - left))
        {
            if (left != -1 and right != -1)
                cout << left;
            else
            {
                cout << (right == -1) ? left : right;
            }
        }
        else
        {
            if(left != -1 and right != -1)
            cout << right;
            else{
                cout<<(right == -1)?left:right;
            }
        }
    }
    else
    {
        cout << "0";
    }
    return 0;
}