#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{

    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    vector<bool> primes(100000000 + 1, true);
    for (lli p = 2; p * p <= primes.size(); p++)
    {
        if (primes[p] == true)
        {
            for (lli i = p * p; i <= primes.size(); i += p)
                primes[i] = false;
        }
    }
    for(lli i = 2;i<2000;i++){
        cout<<i<<" "<<primes[i]<<endl;
    }
    // lli t;
    // cin>>t;
    // while (t--)
    // {
    //     lli n;
    //     cin>>n;
    //     vector<lli> given(n);
    //     lli count = 0;
    //     for (lli i = 0; i < given.size(); i++)
    //     {
    //         // cin>>i;
    //         cin>>given[i];
    //         if (primes[given[i]])
    //             count++;
    //     }
    //     printf("%lld", count);
    // }
    return 0;
}

