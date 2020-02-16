#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int dp[110][110];
lli lps(string &a, string &b, lli i, lli j){
    if(i == -1 or j == -1){
        return 0;
    }
    if(dp[i][j] == -1){
        if(a[i] == b[j]){
            dp[i][j] = 1+lps(a, b, i-1, j-1);
        }
        else{
            dp[i][j] = max(lps(a, b, i-1, j) , lps(a, b, i, j-1));
        }
    }
    return dp[i][j];
}
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        memset(dp, -1, sizeof(dp));
        string a, b;
        cin>>a>>b;
        // cout<<a<<" "<<b;
        int length = lps(a, b, a.size()-1, b.size()-1);
        // cout<<length<<endl;
        cout<<(a.size() + b.size() - length)<<endl;
    }
    return 0;
}
