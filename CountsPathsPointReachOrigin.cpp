#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli dp[30][30];
lli solve(lli r,lli c){
    if(r == 0 || c == 0){
        return 1;
    }
    if(dp[r][c] == -1){
        dp[r][c] = solve(r-1, c) + solve(r, c-1);
    }
    return dp[r][c];
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
        lli r, c;
        cin>>r>>c;
        cout<<solve(r, c)<<endl;
    }
    return 0;
}
