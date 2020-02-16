#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int dp[1100][1100];
string given;
lli solve(lli low, lli high){
    if(low <= high){    
        if(low == high){
            // dp[low][high]= 1;
            return 1;
        }
        if(given[low] == given[high] and high == low+1){
            return 2;
        }
        else{
            // if(dp[low][high] != -1){
            //     return dp[low][high];
            // }
            // else{
                if(given[low] == given[high]){
            //         dp[low][high] = 2+solve(low+1, high-1);
            //         return dp[low][high];
                    return solve(low+1, high -1)+2;
                }
                else{
                    // dp[low][high] = max(solve(low+1, high), solve(low, high-1));
            //         return dp[low][high];
                    return max(solve(low+1, high), solve(low, high-1));
                }
            // }
    
        }
    }
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        memset(dp, -1, sizeof(dp));
        cin>>given;
        cout<<solve(0, given.size()-1)<<endl;
    }
    return 0;
}
