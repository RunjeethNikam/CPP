#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    lli n, k;
    cin>>n>>k;
    vector<lli> given(n);
    vector<lli> dp(n, 0);
    lli x = INT_MAX;
    for(lli i = 0;i<n;i++)
    {
        cin>>given[i];
        x = min(given[i], x);
        dp[i] = x;
        
    }
    x = INT_MIN;
    for(lli i = 0;i<n;i++){
        x = max(x, (given[i]*k - dp[i]*k));
    }
    cout<<x;
    return 0;
}
