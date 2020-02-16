#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli n, q;
    cin>>n>>q;
    vector<lli> given(n+1);
    for(lli i = 1;i <= n;i++){
        cin>>given[i];
    }
    vector<map<lli,lli>> dp(n);
    lli count = 0;
    lli prevDiff = given[0];
    dp[0][prevDiff]++;
    for(lli i = 1;i<n;i++){
        lli difference = given[i]- given[i-1];
        if(difference != prevDiff){
            count = 0;
        }
        else{
            count++;
        }
        dp[i][difference] = max(count, dp[i][difference]);
    }
    return 0;
}
