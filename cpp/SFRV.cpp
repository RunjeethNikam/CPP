#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while (t--)
    {
        lli sz;
        cin>>sz;
        vector<lli> given(sz+1);
        for(auto i = 1;i<=sz;i++){
            cin>>given[i];
        }
        vector<lli> dp(sz+2);
        dp[0] = 0;
        dp[1] = given[1];
        for(auto i = 2;i<= sz;i++){
            lli noSwap = dp[i-1] + i*given[i];
            lli Swap = dp[i-2] + (i*given[i-1] + (i-1)*given[i]);
            dp[i] = (Swap > noSwap)?(Swap):(noSwap);
        }
        cout<<dp[sz]<<endl;
    }
    return 0;
}
