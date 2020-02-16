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
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        string given;
        cin>>given;
        if(given[0] == '0'){
            cout<<0<<endl;
        }
        else{
            vector<lli> dp(given.size()+1, 0);
            dp[0] = 1, dp[1] = 1;
            for(lli i = 2;i<dp.size();i++){
                if(given[i-1] > '0'){
                    dp[i] = dp[i-1];
                }
                if(given[i-2] == '1' || given[i-2] == '2' and given[i-1] < '7'){
                    dp[i] += dp[i-2];
                }
            }
            cout<<dp.back()<<endl;
        }
    }
    return 0;
}
