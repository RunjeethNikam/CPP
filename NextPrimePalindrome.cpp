#include <bits/stdc++.h>
using namespace std;
bool palindrome(int n)
{
    string x = to_string(n);
    string y = to_string(n);
    reverse(y.begin(), y.end());
    return (x == y);
}
int main(int argc, char const *argv[])
{
    vector<bool> prime(1e7 + 5, true);
    for (int i = 2; i * i < prime.size(); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < prime.size(); j += i)
            {
                prime[j] = false;
            }
        }
    }
    prime[1] = false;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = n; i < prime.size(); i++)
        {
            if (prime[i])
            {
                if (palindrome(i))
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
