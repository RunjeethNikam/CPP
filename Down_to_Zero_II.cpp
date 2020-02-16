#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int q;
    cin>>q;
    vector<int> dp(1000000+5, -1);
    dp[0] = 0,dp[1] = 1,dp[2] = 2,dp[3] = 3;
    for(int i = 1;i<dp.size();i++){
        if((dp[i] == -1) || dp[i] > (dp[i-1]+1) )
            dp[i] = dp[i-1]+1;
        for(int j = 1;j*i < dp.size()  && j<=i;j++){
            if((dp[i*j] == -1) || ((dp[j*i]) > (dp[i] +1) )){
                dp[i*j] = dp[i]+1;
            }
        }
    }
    while(q--){
        int x;
        cin>>x;
        cout<<dp[x]<<endl;
    }
    return 0;
}
