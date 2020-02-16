#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int dp[100][100];
int solve(string given, int i, int j){
    if(i<=j){
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(i == j){
            return dp[i][j] = 0;
        }
        else if(given[i] == given[j]){
            dp[i][j] = solve(given, i + 1, j - 1);
            return dp[i][j];
        }
        else{
            dp[i][j] = 1 + min({solve(given, i, j - 1), solve(given, i + 1, j)});
            return dp[i][j];
        }
    }
    else{
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        string given;
        cin>>given;
        cout<<solve(given, 0, given.size()-1);
    }
    
    return 0;
}
