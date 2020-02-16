// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/attack-of-the-mind-flayer-3-119b5d47/
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 9;
int t;
int n, m;
int anss[maxn], health[maxn], pwr[maxn];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        memset(anss, -1, sizeof(anss));
        for (int i = 1; i <= n; i++)
            cin >> health[i];
        for (int i = 1; i <= m; i++)
        {
            int x;
            cin >> x;
            for (int j = i; j <= n; j += i)
            {
                if(anss[j] != -1)
                continue;
                if(health[j] <= x)
                anss[j] = i;
            }
        }
        for(int i = 1;i<= n;i++)
        cout<<anss[i]<<endl;
    }
}