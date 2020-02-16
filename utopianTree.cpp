#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    vector<lli> dp(100);
    dp[1] = 1;
    for(lli i = 2;i<61;i++){
        if(i&1){
            dp[i] = dp[i-1] +1;
        }
        else{
            dp[i] = dp[i-1]*2;
        }
    }
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        cout<<dp[++n]<<endl;
    }
    return 0;
}
